/* getch�̗��p��
   ��Visual C++�Ȃǂ�MS-Windows�^MS-DOS�œ��� */

#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int ch;
	int retry;

	do {
		printf("Type a key.");
		ch = getch();

		printf("\nYou typed %c whose value was %d\n",
											 isprint(ch) ? ch : ' ', ch);

		printf("Once again? (Y/N) :");
		retry = getch();
		if (isprint(retry))
			putch(retry);

		putchar('\n');

	} while (retry == 'Y' || retry == 'y');

	return 0;
}
