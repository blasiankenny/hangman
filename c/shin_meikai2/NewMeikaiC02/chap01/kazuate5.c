/* �����ăQ�[���i���̂T�F���͗�����\���j*/

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

	printf("0�`999�̐����𓖂ĂĂ��������B\n\n");

	stage = 0;
	do {
		printf("�c��%d��B�������ȁF", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;			/* �ǂݍ��񂾒l��z��Ɋi�[ */

		if (no > ans)
			printf("\a�����Ə�������B\n");
		else if (no < ans)
			printf("\a�����Ƒ傫����B\n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("\a�c�O�B������%d�ł����\n", ans);
	else {
		printf("�����ł��B\n");
		printf("%d��œ�����܂����ˡ\n", stage);
	}

	puts("\n--- ���͗��� ---");
	for (i = 0; i < stage; i++)
		if(num[i]-ans==0){
			printf(" %2d : %4d %4d\n", i + 1, num[i], num[i] - ans);
		}
		else{
			printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);
		}
	return 0;
}
