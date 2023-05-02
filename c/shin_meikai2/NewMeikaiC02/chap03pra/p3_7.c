/* ����񂯂�Q�[���i���̂T�F�R��揟�����ق��������j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define Win 3
#define Loss 4
#define OnceMore 5
#define With1 6
#define With2 7

int human;		/* �l�Ԃ̎� */
int comp;
int comp2;
int win_no;		/* �������� */
int lose_no;	/* �������� */
int draw_no;	/* ������������ */

char *hd[] = {"Rock", "Paper", "Scissors"};		/* �� */

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

	comp = rand() % 3;		
    comp2 = rand() % 3;
	do {
		printf("\n\aJyanken Pon!");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human);		
	} while (human < 0 || human > 2);
}


void count_no(int result)
{
    int re;
    //Draw
	if(result==0){
        re=OnceMore;
        draw_no++;
    }
    //Win
    else if(human==2){
        if(comp==1&&comp2==1){
            re=Win;
            win_no++;
        }
        else if(comp==0||comp2==0){
            re=Loss;
            lose_no++;
        }
        else if(comp==2){
            re=With1;
            draw_no++;
        }
        else{
            re=With2;
            draw_no++;
        }
    }
    else if(human==1){
        if(comp==0&&comp2==0){
            re=Win;
            win_no++;
        }
        else if(comp==2||comp2==2){
            re=Loss;
            lose_no++;

        }
        else if(comp==1){
            re=With1;
            draw_no++;
        }
        else{
            re=With2;
            draw_no++;
        }
    }
    else{
        if(comp==2&&comp2==2){
            re=Win;
            win_no++;
        }
        else if(comp==1||comp2==1){
            re=Loss;
            lose_no++;

        }
        else if(comp==0){
            re=With1;
            draw_no++;
        }
        else{
            re=With2;
            draw_no++;
        }
    }
}
/*--- ���茋�ʂ�\�� ---*/
void disp_result(int result)
{
	int re;
    //Draw
	if(result==0){
        printf("Draw!\n");
    }
    //Win
    else if(human==2){
        if(comp==1&&comp2==1){
            printf("Win!\n");
        }
        else if(comp==0||comp2==0){
            printf("Loss!\n");
        }
        else if(comp==2){
            printf("Draw!\n");
        }
        else{
            printf("Draw!\n");
        }
    }
    else if(human==1){
        if(comp==0&&comp2==0){
            printf("Win!\n");
        }
        else if(comp==2||comp2==2){
            printf("Loss!\n");
        }
        else if(comp==1){
            printf("Draw!\n");        }
        else{
            printf("Draw!\n");
        }
    }
    else{
        if(comp==2&&comp2==2){
            printf("Win!\n");
        }
        else if(comp==1||comp2==1){
            printf("Loss!\n");
        }
        else if(comp==0){
            printf("Draw!\n");
        }
        else{
            printf("Draw!\n");
        }
    }
}

int main(void)
{
	int judge;			
    int rounds;
    int re;
	initialize();						

    printf("how many rounds do you wanna play Jyanken for?: ");
    scanf("%d",&rounds);


	while(rounds--){
		jyanken();						
		printf("comp's was %s, comp2's was %s and yours was %s\n", hd[comp],hd[comp2], hd[human]);

		judge = (human + comp + comp2) % 3;	

		count_no(judge);				

		disp_result(judge);				
	} 

	printf(win_no == 3 ? "\nYou won\n" : "\nYou lost\n");

	printf("%d wins %d losses %d draws\n", win_no, lose_no, draw_no);

	return 0;
}
