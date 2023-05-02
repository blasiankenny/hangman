/* ����������ɂ��L�[�^�C�s���O���K�i���̂P�j*/

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }
static void term_getputch(void) { /* �� */ }

#define QNO		12		

int main(void)
{
	char *str[QNO] = {"book",   "computer", "default",  "comfort",
					  "monday", "power",    "light",    "music", 
					  "programming", "dog", "video",    "include"};
	int i, stage;
	clock_t	start, end;				/* �J�n�����E�I������ */

	init_getputch();
	printf("Welcome to typing practice\n");
	printf("Enter space key to start\n");
	while (getch() != ' ')			/* �X�y�[�X�L�[������ */
		;							/* �����܂ő҂� */

	start = clock();				/* �J�n���� */

	for (stage = 0; stage < QNO; stage++) {
		int len = strlen(str[stage]);	/* ������str[stage]�̕����� */
		for (i = 0; i < len; i++) {
			/* str[stage][i]�ȍ~��\�����ăJ�[�\����擪�֖߂� */
			printf("%s \r", &str[stage][i]);

			fflush(stdout);
			while (getch() != str[stage][i])
				;
		}
	}

	end = clock();					/* �I������ */

	printf("\rYou took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	term_getputch();

	return 0;
}
