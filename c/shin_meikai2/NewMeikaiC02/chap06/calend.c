/* �J�����_�[�\���i�\������N�����R�}���h���C���Ŏw��j*/

#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/*--- �e���̓��� ---*/
int mday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/*--- year�Nmonth��day���̗j�������߂� ---*/
int dayofweek(int year, int month, int day)
{
	if (month == 1 || month == 2) {
		year--;
		month += 12;
	}
	return (year + year/4 - year/100 + year/400 + (13*month+8)/5 + day) % 7;
}

/*--- year�N�͉[�N���H�i0�c���N�^1�c�[�N�j ---*/
int is_leap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

/*--- year�Nmonth���̓����i28�`31�j ---*/
int monthdays(int year, int month)
{
	if (month-- != 2)						/* month���Q���łȂ��Ƃ� */
		return mday[month];
	return mday[month] + is_leap(year);		/* month���Q���ł���Ƃ� */
}

/*--- y�Nm���̃J�����_�[��\�� ---*/
void put_calendar(int y, int m)
{
	int i;
	int wd = dayofweek(y, m, 1);	/* y�Nm��1���̗j�� */
	int mdays = monthdays(y, m);	/* y�Nm���̓��� */

	printf(" Su Mon Tu We Th Fr Sa \n");
	printf("----------------------\n");

	printf("%*s", 3 * wd, "");		/* 1����荶���̃X�y�[�X��\�� */

	for (i = 1; i <= mdays; i++) {
		printf("%3d", i);
		if (++wd % 7 == 0)		/* �y�j����\�������� */
			putchar('\n');		/* ���s */
	}
	if (wd % 7 != 0)
		putchar('\n');
}

/*--- ������̐擪n�������r�i�啶���E����������ʂ��Ȃ��j ---*/
int strncmpx(const char *s1, const char *s2, size_t n)
{
	while (n && toupper(*s1) && toupper(*s2)) {
		if (toupper(*s1) != toupper(*s2))			/* �������Ȃ� */
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if (!n)	 return 0;
	if (*s1) return 1;
	return -1;
}

/*--- �����񂩂猎�̒l�𓾂� ---*/
int get_month(char *s)
{
	int i;
	int m;		/* �� */
	char *month[] = {"", "January", "February", "March", "April",
					 "May", "June", "July", "August", "September",
					 "October", "November", "December"};

	m = atoi(s);
	if (m >= 1 && m <= 12)			/* �����\�L�F"1", "2", �c, "12" */
		return m;

	for (i = 1; i <= 12; i++)		/* �p��\�L */
		if (strncmpx(month[i], s, 3) == 0)
			return i;

	return -1;						/* �ϊ����s */
}

int main(int argc, char *argv[])
{
	int  y, m;
	time_t t = time(NULL);				/* ���݂̎������擾 */
	struct tm *local = localtime(&t);	/* �v�f�ʂ̎����i�n�����j�ɕϊ� */

	y = local->tm_year + 1900;			/* �����̔N */
	m = local->tm_mon + 1;				/* �����̌� */

	if (argc >= 2) {				/* argv[1]�̉�� */
		m = get_month(argv[1]);
		if (m < 0 || m > 12) {
			fprintf(stderr, "Invalid value\n");
			return 1;
		}
	}
	if (argc >= 3) {				/* argv[2]�̉�� */
		y = atoi(argv[2]);
		if (y < 0) {
			fprintf(stderr, "Invalid year\n");
			return 1;
		}
	}

	printf("Year: %d Month: %d\n\n", y, m);

	put_calendar(y, m);		/* y�Nm���̃J�����_�[��\�� */

	return 0;
}
