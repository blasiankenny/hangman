#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int human;		
int comp;		
int win_no;		
int lose_no;	
int draw_no;	

char *hd[] = {"Rock", "Scissors", "Paper"};		


void initialize(void)
{
	win_no  = 0;		
	lose_no = 0;		
	draw_no = 0;		

	srand(time(NULL));	

	printf("Starting Jyanken game!\n");
}


void jyanken(void)
{
	int i;

	comp = rand() % 3;		

	do {
		printf("\n\aJyanken Pon!");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human);		
	} while (human < 0 || human > 2);
}


void count_and_result(int result)
{
	switch (result) {
	 case 0: draw_no++;	 break;						
	 case 1: lose_no++;	 break;						
	 case 2: win_no++;   break;						
    }
	switch (result) {
	 case 0: puts("draw");	   break;	
	 case 1: puts("you lost");   break;	
	 case 2: puts("you won");   break;	
	}
}


int confirm_retry(void)
{
	int x;

	printf("wanna try again? (0)...No (1)...Yes");
	scanf("%d", &x);

	return x;
}

int main(void)
{
	int judge;				
	int retry;			

	initialize();						

	do {
		jyanken();					

	
		printf("Mine was %s and yours was %s\n", hd[comp], hd[human]);

		judge = (human - comp + 3) % 3;	

		count_and_result(judge);						

		retry = confirm_retry();		

	} while (retry == 1);

	printf("%d wins %d losses %d draws\n", win_no, lose_no, draw_no);

	return 0;
}
