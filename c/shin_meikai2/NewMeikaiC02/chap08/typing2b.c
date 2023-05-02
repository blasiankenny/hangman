/* ����������ɂ��L�[�^�C�s���O���K�i���̂Q�F�o�菇�������_��[��@�P]�j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }

static void term_getputch(void) { /* �� */ }

#define QNO		12		/* ��萔 */

#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

int main(void)
{
	char *str[QNO] = {"book",   "computer", "default",  "comfort",
					  "monday", "power",    "light",    "music", 
					  "programming", "dog", "video",    "include"};
	int i, stage;
	int qno[QNO];					/* �o�菇�� */
	clock_t	start, end;				/* �J�n�����E�I������ */

	init_getputch();
	srand(time(NULL));				/* �����̎��ݒ� */

	for (i = 0; i < QNO; i++)
		qno[i] = i;

	for (i = QNO - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		if (i != j)
			swap(int, qno[i], qno[j]);
	}

	printf("Welcome to typing practice\n");
	printf("Enter space key to start\n");
	while (getch() != ' ')			/* �X�y�[�X�L�[������ */
		;							/* �����܂ő҂� */

	start = clock();				/* �J�n���� */

	for (stage = 0; stage < QNO; stage++) {
		int len = strlen(str[qno[stage]]); /* ������str[qno[stage]]�̕����� */
		for (i = 0; i < len; i++) {
			/* str[qno[stage]][i]�ȍ~��\�����ăJ�[�\����擪�֖߂� */
			printf("%s \r", &str[qno[stage]][i]);

			fflush(stdout);
			while (getch() != str[qno[stage]][i])
				;
		}
	}

	end = clock();		
	printf("\rYou took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	term_getputch();

	return 0;
}
