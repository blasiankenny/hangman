/* �L�[�z�u�A�z�^�C�s���O���K�i�^�C�v���镶�����l��������j
		A?DFG �ƕ\�����ꂽ��S���^�C�v
		qwe?t �ƕ\�����ꂽ��r���^�C�v						*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }
static void term_getputch(void) { /* �� */ }

#define	NO			30			/* ���K�� */
#define	KTYPE		16			/* �u���b�N�� */

int main(void)
{
	char *kstr[] = {"12345",  "67890-^\\",		/* ��P�i         */
					"!\"#$%", "&'() =~|",		/* ��P�i [Shift] */
					"qwert",  "yuiop@[",		/* ��Q�i         */
					"QWERT",  "YUIOP`{",		/* ��Q�i [Shift] */
					"asdfg",  "hjkl;:]",		/* ��R�i         */
					"ASDFG",  "HJKL+*}",		/* ��R�i [Shift] */
					"zxcvb",  "nm,./\\",		/* ��S�i         */
					"ZXCVB",  "NM<> _",			/* ��S�i [Shift] */
					};
	int 	i, stage;
	clock_t	start, end;			/* �J�n�����E�I������ */

	init_getputch();
	srand(time(NULL));			/* �����̎��ݒ� */

	printf("Starting key position association typing practice\n");
	printf("Type a letter hidden with \"?\"\n");
	printf("Enter space key to start\n");
	fflush(stdout);
	while (getch() != ' ')
		;

	start = clock();			/* �J�n���� */

	for (stage = 0; stage < NO; stage++) {
		int  k, p, key;
		char temp[10];

		do {
			k = rand() % KTYPE;
			p = rand() % strlen(kstr[k]);
			key = kstr[k][p];
		} while (key == ' ');

		strcpy(temp, kstr[k]);
		temp[p] = '?';

		printf("%s", temp);
		fflush(stdout);

		while (getch() != key)
			;
		putchar('\n');
	}

	end = clock();				/* �I������ */

	printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	term_getputch();

	return 0;
}
