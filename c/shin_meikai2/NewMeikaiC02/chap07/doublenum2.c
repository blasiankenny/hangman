/* �_�u���i���o�[�T�[�`�E�g���[�j���O�i���̂Q�F���A���^�C���L�[���́j*/

#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "getputch.h"

#define MAX_STAGE	10					/* ����� */
#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

int main(void)
{
	int i, j, x, stage;
	int dgt[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[10];
	double jikan;						/* ���� */
	clock_t start, end;					/* �J�n�����E�I������ */

	init_getputch();
	srand(time(NULL));					/* �����̎��ݒ� */

	printf("�_�u���Ă��鐔������͂��Ă��������B\n");
	printf("�X�y�[�X�L�[�ŊJ�n���܂��B\n");
	fflush(stdout);
	while (getch() != ' ')
		;

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x = rand() % 9;		/* 0�`8�̗����𐶐� */
		int no;					/* �ǂݍ��񂾒l */

		i = j = 0;
		while (i < 9) {			/* dgt[x]���_�u�点�ăR�s�[ */
			a[j++] = dgt[i];
			if (i == x)
				a[j++] = dgt[i];
			i++;
		}

		for (i = 9; i > 0; i--) {	/* �z��a���V���b�t�� */
			int j = rand() % (i + 1);
			if (i != j)
				swap(int, a[i], a[j]);
		}

		for (i = 0; i < 10; i++)	/* �S�v�f��\�� */
			printf("%d ", a[i]);
		printf("�F");
		fflush(stdout);

		do {
			no = getch();
			if (isprint(no)) {			/* �\���\�ł���� */
				putch(no);				/* �����ꂽ�L�[��\�� */
				if (no != dgt[x] + '0')	/* �����łȂ���� */
					putch('\b');		/* �J�[�\������߂� */
				else
					printf("\n");		/* ���s */
				fflush(stdout);
			}
		} while (no != dgt[x] + '0');
	}
	end = clock();

	jikan = (double)(end - start) / CLOCKS_PER_SEC;

	printf("%.1f�b������܂����B\n", jikan);

	if (jikan > 25.0)
		printf("�݂����܂��B\n");
	else if (jikan > 20.0)
		printf("�����݂��ł��ˁB\n");
	else if (jikan > 17.0)
		printf("�܂��܂��ł��ˁB\n");
	else
		printf("�f�����ł��ˁB\n");

	term_getputch();

	return 0;
}
