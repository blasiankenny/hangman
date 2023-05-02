/* 整数値の読込みと表示 */

#include <stdio.h>

int main(void)
{
	int x;				/* 読み込んだ値 */

	printf("整数を入力してください：");
	scanf("%d", &x);

	printf("%dと入力しましたね。\n", x);

	return 0;
}
