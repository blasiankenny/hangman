/* ���b�N�i���o�[�T�[�`�E�g���[�j���O�i���̂P�j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE	10			/* ����� */

int main(void)
{
	int i, j, stage;
	int dgt[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[8];
	double jikan;			/* ���� */
	clock_t start, end;		/* �J�n�����E�I������ */

	srand(time(NULL));		/* �����̎��ݒ� */

	printf("Type the missing number\n");

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x = rand() % 9;		/* 0�`8�̗����𐶐� */
		int no;					/* �ǂݍ��񂾒l */

		i = j = 0;
		while (i < 9) {				/* dgt[x]���΂��ăR�s�[ */
			if (i != x)
				a[j++] = dgt[i];
			i++;
		}

		for (i = 0; i < 8; i++)		/* �S�v�f��\�� */
			printf("%d ", a[i]);
		printf(":");

		do {
			scanf("%d", &no);
		} while (no != dgt[x]);		/* ���������͂����܂ŌJ��Ԃ� */
	}
	end = clock();

	jikan = (double)(end - start) / CLOCKS_PER_SEC;

	printf("You took %.1f seconds\n", jikan);

	if (jikan > 25.0)
		printf("Too slow\n");
	else if (jikan > 20.0)
		printf("A little slow\n");
	else if (jikan > 17.0)
		printf("Not so bad\n");
	else
		printf("Pretty good\n");

	return 0;
}
