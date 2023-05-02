#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE	10		/* �ő���͉� */

int main(void)
{
	int i;
	int stage;				/* ���͂����� */
	int no;					/* �ǂݍ��񂾒l */
	int ans;				/* ���Ă����鐔 */
	int num[MAX_STAGE];		/* �ǂݍ��񂾒l�̗��� */

	srand(time(NULL));		/* �����̎��ݒ� */
	ans = rand() % 1000;	/* 0�`999�̗����𐶐� */

	printf("0~999\n\n");

	stage = 0;
	do {
		printf("%d remaining. Enter a number: ", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;			/* �ǂݍ��񂾒l��z��Ɋi�[ */

		if (no > ans)
			printf("\aless than that\n");
		else if (no < ans)
			printf("\agreater than that\n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("\aYou lost. The answer is %d\n", ans);
	else {
		printf("congrants!\n");
		printf("You attempted for %d times\n", stage);
	}

	puts("\n--- history ---");
	for (i = 0; i < stage; i++)
		if(num[i]-ans==0){
			printf(" %2d : %4d %4d\n", i + 1, num[i], num[i] - ans);
		}
		else{
			printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);
		}
	return 0;
}
