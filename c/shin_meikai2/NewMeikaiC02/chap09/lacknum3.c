/* ���b�N�i���o�[�T�[�`�E�g���[�j���O�i���̂R�F�O��̓����E�ō����_��\���j*/

#include <time.h>
#include <float.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }
static void term_getputch(void) { /* �� */ }

#define MAX_STAGE	10
#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

char dtfile[] = "LACKNUM.DAT";				/* �t�@�C���� */

/*--- �O��̃g���[�j���O�����擾�E�\�����čō����_��Ԃ� ---*/
double get_data(void)
{
	FILE *fp;
	double best;		/* �ō����_ */

	if ((fp = fopen(dtfile, "r")) == NULL) {
		printf("It's your first time running this program, right?\n\n");
		best = DBL_MAX;
	} else {
		int year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%lf", &best);
		printf("The last time was in %d/%d/%d %d:%d:%d.\n",
											year, month, day, h, m, s);

		printf("The best score so far is %.1f\n\n", best);
		fclose(fp);
	}

	return best;
}

/*--- ����̃g���[�j���O������������ ---*/
void put_data(double best)
{
	FILE *fp;
	time_t t = time(NULL);
	struct tm *local = localtime(&t);

	if ((fp = fopen(dtfile, "w")) == NULL)
		printf("Error detected!!");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
					local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
					local->tm_hour,		   local->tm_min,	  local->tm_sec);

		fprintf(fp, "%f\n", best);
		fclose(fp);
	}
}

/*--- �g���[�j���O�����s���ē��_�i���v���ԁj��Ԃ� ---*/
double go(void)
{
	int i, j, stage;
	int dgt[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[8];
	double jikan;				/* ���� */
	clock_t start, end;			/* �J�n�����E�I������ */

	printf("Please enter the missing number\n");
	printf("Enter space key to start\n");
	while (getch() != ' ')
		;

	start = clock();

	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x = rand() % 9;		/* 0�`8�̗����𐶐� */
		int	no;					/* �ǂݍ��񂾒l */

		i = j = 0;
		while (i < 9) {			/* dgt[x]���΂��ăR�s�[ */
			if (i != x)
				a[j++] = dgt[i];
			i++;
		}

		for (i = 7; i > 0; i--) {		/* �z��a���V���b�t�� */
			int j = rand() % (i + 1);
			if (i != j)
				swap(int, a[i], a[j]);
		}

		for (i = 0; i < 8; i++)		/* �S�v�f��\�� */
			printf("%d ", a[i]);
		printf(":");
		fflush(stdout);

		do {
			no = getch();
			if (isprint(no)) {				/* �\���\�ł���� */
				putch(no);					/* �����ꂽ�L�[��\�� */
				if (no != dgt[x] + '0')		/* �����łȂ���� */
					putch('\b');			/* �J�[�\������߂� */
				else
					printf("\n");			/* ���s */
				fflush(stdout);
			}
		} while (no != dgt[x] + '0');
	}
	end = clock();

	jikan = (double)(end - start) / CLOCKS_PER_SEC;

	printf("You took %.1f seconds\n", jikan);

	if (jikan > 25.0)
		printf("Too slow\n");
	else if (jikan > 20.0)
		printf("A little slow\n");
	else if (jikan > 17.0)
		printf("Not bad\n");
	else
		printf("So fast!\n");

	return jikan;
}

int main(void)
{
	int retry;		/* ������x�H */
	double score;	/* ���_�i���v���ԁj */
	double best;	/* �ō����_�i�ŒZ���v���ԁj*/

	best = get_data();			/* �O��܂ł̍ō����_�𓾂� */

	init_getputch();
	srand(time(NULL));			/* �����̎��ݒ� */

	do {
		score = go();			/* �g���[�j���O���s */

		if (score < best) {
			printf("You got the best score!!\n");
			best = score;		/* �ō����_�X�V */
		}

		printf("Wanna try one more time?  (0)No (1)Yes");
		scanf("%d", &retry);
	} while (retry == 1);

	put_data(best);				/* ����̓��t�E�����E���_���������� */

	term_getputch();

	return 0;
}
