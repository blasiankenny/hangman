/* �P���L���g���[�j���O�i�S���̐��l���L���j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE	10							/* �X�e�[�W�� */

/*--- x�~���b�o�߂���̂�҂� ---*/
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if ((c2 = clock()) == (clock_t)-1)	/* �G���[ */
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); 
	return 1;
}

int main(void)
{
	int stage;
	int success = 0;						/* ���� */
	clock_t start, end;						/* �J�n�����E�I������ */

	srand(time(NULL));						/* �����̎��ݒ� */

	printf("Memorize the 4-digit number\n");

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x;								/* �ǂݍ��񂾒l */
		int no = rand() % 9000 + 1000;		/* �L�����ׂ����l */

		printf("%d", no);
		fflush(stdout);
		sleep(500);	/* ���񎦂�0.5�b���� */

		printf("\rEnter: ");
		fflush(stdout);
		scanf("%d", &x);

		if (x != no)
			printf("\aThat's wrong.\n");
		else {
			printf("That's correct!\n");
			success++;
		}
	}
	end = clock();

	printf("You got %d out of %d times right.\n", MAX_STAGE, success);
	printf("You took %.1fseconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
