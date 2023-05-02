/* �_�u���i���o�[�T�[�`�E�g���[�j���O�i���̂P�j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#define MAX_STAGE	10					/* ����� */
#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

int main(void)
{
	int i, j, stage;
	int dgt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[11];
	double jikan;						/* ���� */
	clock_t start, end;					/* �J�n�����E�I������ */

	srand(time(NULL));					/* �����̎��ݒ� */

	printf("Type the duplicate number\n");
	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x = rand() % 10;		/* 0�`8�̗����𐶐� */
		int no;					/* �ǂݍ��񂾒l */

		i = j = 0;
		while (i < 10) {				/* dgt[x]���_�u�点�ăR�s�[ */
			a[j++] = dgt[i];
			if (i == x)
				a[j++] = dgt[i];
			i++;
		}

		for (i = 10; i > 0; i--) {	/* �z��a���V���b�t�� */
			int j = rand() % (i + 1);
			if (i != j)
				swap(int, a[i], a[j]);
		}

		for (i = 0; i < 11; i++)	{	
			printf("\r%d", a[i]);
            Sleep(500);
            
        }
		printf("\rAnswer:");

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
