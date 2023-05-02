/* 現在の日付・時刻を表示（その３[改]：ctime2関数を利用）*/

#include <time.h>
#include <stdio.h>

/*--- 要素別の時刻をasctime関数に準じて変換（改行文字は付加しない）---*/
char *asctime2(const struct tm *timeptr)
{
	const char wday_name[7][3] = {					/* 曜日 */
		"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
	};
	const char mon_name[12][3] = {					/* 月名 */
		"Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
	};
	static char result[25];				/* 文字列格納先は静的な領域 */

	sprintf(result, "%.3s %.3s %02d %02d:%02d:%02d %4d",
					wday_name[timeptr->tm_wday], mon_name[timeptr->tm_mon],
					timeptr->tm_mday, timeptr->tm_hour, timeptr->tm_min,
					timeptr->tm_sec,  timeptr->tm_year + 1900);
	return result;
}

/*--- time_t型による時刻をctime関数に準じて変換（改行文字は付加しない）---*/
char *ctime2(const time_t *timer)
{
	return asctime2(localtime(timer));
}

int main(void)
{
	time_t current = time(NULL);	/* 現在の時刻を取得 */

	printf("現在の日付・時刻は%sです。\n", ctime2(&current));

	return 0;
}
