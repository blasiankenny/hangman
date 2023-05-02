/* ����񂯂�Q�[���i���̂T�F�R��揟�����ق��������j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int human;		/* �l�Ԃ̎� */
int comp;		/* �R���s���[�^�̎� */
int win_no;		/* �������� */
int lose_no;	/* �������� */
int draw_no;	/* ������������ */

char *hd[] = {"Rock", "Scissors", "Paper"};		/* �� */

/*--- �������� ---*/
void initialize(void)
{
	win_no	= 0;		/* �������� */
	lose_no	= 0;		/* �������� */
	draw_no	= 0;		/* ������������ */

	srand(time(NULL));	/* �����̎��ݒ� */

	printf("Starting Jyanken game!\n");
}

/*--- ����񂯂���s�i��̓Ǎ��݁^�����j ---*/
void jyanken(void)
{
	int i;

	comp = rand() % 3;		/* �R���s���[�^�̎�i0�`2�j�𗐐��Ő��� */

	do {
		printf("\n\aJyanken Pon!");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human);		/* �l�Ԃ̎��ǂݍ��� */
	} while (human < 0 || human > 2);
}

/*--- �����^�����^���������񐔂��X�V ---*/
void count_no(int result)
{
	switch (result) {
	 case 0: draw_no++;	 break;						/* �������� */
	 case 1: lose_no++;	 break;						/* ���� */
	 case 2: win_no++;   break;						/* ���� */
	}
}

/*--- ���茋�ʂ�\�� ---*/
void disp_result(int result)
{
	switch (result) {
	 case 0: puts("draw");	   break;	
	 case 1: puts("you lost");   break;	
	 case 2: puts("you won");   break;	
	}
}

int main(void)
{
	int judge;			
    int rounds;
	initialize();						

    printf("how many rounds do you wanna play Jyanken for?: ");
    scanf("%d",&rounds);


	while(rounds--){
		jyanken();						/* ����񂯂���s */

		/* �R���s���[�^�Ɛl�Ԃ̎��\�� */
		printf("Mine was %s and yours was %s\n", hd[comp], hd[human]);

		judge = (human - comp + 3) % 3;	/* ���s�𔻒� */

		count_no(judge);				/* �����^�����^���������񐔂��X�V */

		disp_result(judge);				/* ���茋�ʂ�\�� */

	} 

	printf(win_no == 3 ? "\nYOu won\n" : "\nYou lost\n");

	printf("%d wins %d losses %d draws\n", win_no, lose_no, draw_no);

	return 0;
}
