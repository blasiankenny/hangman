/* 最大３ヶ月分を横に並べたカレンダー表示 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- 各月の日数 ---*/
int mday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/*--- year年month月day日の曜日を求める ---*/
int dayofweek(int year, int month, int day)
{
	if (month == 1 || month == 2) {
		year--;
		month += 12;
	}
	return (year + year/4 - year/100 + year/400 + (13*month+8)/5 + day) % 7;
}

/*--- year年は閏年か？（0…平年／1…閏年） ---*/
int is_leap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

/*--- year年month月の日数（28～31） ---*/
int monthdays(int year, int month)
{
	if (month-- != 2)						/* monthが２月でないとき */
		return mday[month];
	return mday[month] + is_leap(year);		/* monthが２月であるとき */
}

/*--- y年m月のカレンダーを２次元配列sに格納 ---*/
void make_calendar(int y, int m, char s[7][22])
{
	int i, k;
	int wd = dayofweek(y, m, 1);		/* y年m月1日の曜日 */
	int mdays = monthdays(y, m);		/* y年m月の日数 */
	char tmp[4];

	sprintf(s[0], "%10d / %02d      ", y, m);	/* タイトル（年／月） */

	for (k = 1; k < 7; k++)				/* タイトル以外のバッファをクリア */
		s[k][0] = '\0';

	k = 1;
	sprintf(s[k], "%*s", 3 * wd, "");	/* 1日の左側を空白文字で埋める */

	for (i = 1; i <= mdays; i++) {
		sprintf(tmp, "%3d", i);
		strcat(s[k], tmp);				/* i日の日付を追加 */
		if (++wd % 7 == 0)				/* 土曜日を格納したら */
			k++;						/* 次の行へ進む */
	}

	if (wd % 7 == 0)
		k--;
/*
	else {
		for (wd %= 7; wd < 7; wd++)		 最終日の右側に空白文字を追加 
			strcat(s[k], "   ");
	}
*/
	while (++k < 7)						/* 未使用行を空白文字で埋めつくす */
		sprintf(s[k], "%21s", "");
}

/*--- ３次元配列sbufに格納されたカレンダーを横にn個並べて表示 ---*/
void print(char sbuf[3][7][22], int n)
{
	int i, j;

	for (i = 0; i < n; i++){				/* タイトル（年／月）を表示 */
		if(i==2)
			printf("%s", sbuf[i][0]);
		else
			printf("%s   ",sbuf[i][0]);
	}
	putchar('\n');

	for (i = 0; i < n; i++){
		if(i==2)
			printf(" Su Mo Tu We Th Fr Sa");
		else
			printf(" Su Mo Tu We Th Fr Sa   ");
	}
	putchar('\n');

	for (i = 0; i < n; i++){
		if(i==2)
			printf("----------------------");
		else
			printf("----------------------  ");
	}
		
	putchar('\n');

	for (i = 1; i < 7; i++) {				/* カレンダー本体部を */
		
        if(sbuf[0][i][2]==' '&&sbuf[1][i][2]==' '&&sbuf[2][i][2]==' '&&
        sbuf[0][i][20]==' '&&sbuf[1][i][20]==' '&&sbuf[2][i][20]==' '){
                break;
            }

        for (j = 0; j < n; j++){			/* 横にn個並べて */
			
            if(j==2)
				printf("%-21s", sbuf[j][i]);
			else
				printf("%-21s   ", sbuf[j][i]);	/* 表示 */
		}
		putchar('\n');
	}
	putchar('\n');
}

/*--- y1年m1月からy2年m2月までのカレンダーを表示 ---*/
void put_calendar(int y1, int m1, int y2, int m2)
{
	int y = y1;
	int m = m1;
	int n = 0;						/* バッファに蓄えている月数 */
	char sbuf[3][7][22];			/* カレンダー文字列のバッファ */

	while (y <= y2) {
		if (y == y2 && m > m2) break;
		make_calendar(y, m, sbuf[n++]);
		if (n == 3) {				/* ３ヶ月分たまったら表示 */
			print(sbuf, n);
			n = 0;
		}
		m++;						/* 次の月へ */
		if (m == 13 && y < y2) {	/* 年を繰り越す */
			y++;
			m = 1;
		}
	}
	if (n)							/* 未表示月があれば */
		print(sbuf, n);				/* それらを表示する */
}

int main(void)
{
	int y1, m1, y2, m2;
    int check=1;

	printf("Displaying the calendar\n");

	printf("Enter the starting year and month\n");

	    while(1){
            printf("Year:");	  scanf("%d", &y1);
            if(y1<0||y1>2050)
                printf("Please enter a number between 0 and 2050\n");
            else
                break;
        }
        while(1){
            printf("Month:");	  scanf("%d", &m1);
            if(m1<1||m1>12)
                printf("Please enter a number between 1 and 12\n");
            else
                break;
        }

        printf("Enter the ending year and month\n");


	    while(1){
            printf("Year:");	  scanf("%d", &y2);
            if(!(y2<0||y2>2050||y1>y2)) break;
            if(y2<0||y2>2050) printf("Please enter a number between 0 and 2050\n");
            if(y1>y2) printf("Please enter a number greater or equal to the starting year\n");
           
        }
        while(1){
            printf("Month:");	  scanf("%d", &m2);
            if(!(m2<1||m2>12||(y1==y2&&m1>m2))) break;
            if(m2<1||m2>12) printf("Please enter a number between 1 and 12\n");
            if(y1==y2&&m1>m2) printf("Please enter a number greater or equal to the starting month\n");
        }
	
	

	putchar('\n');
    
	put_calendar(y1, m1, y2, m2);

	return 0;
}
 