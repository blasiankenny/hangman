#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 10


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

	printf("Starting the Jyanken Game!\n");
}


void jyanken(void)
{
	int i;

	comp = rand() % 3;		

	do {
		printf("\n\aRock Paper Scissors!");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf("%d", &human);		
	} while (human < 0 || human > 2);
}

void count_no(int result)
{
	switch (result) {
	 case 0: draw_no++;	 break;						
	 case 1: lose_no++;	 break;						
	 case 2: win_no++;   break;						
	}
}


void disp_result(int result)
{
	switch (result) {
	 case 0: puts("Draw!");	   break;	
	 case 1: puts("You lost");   break;	
	 case 2: puts("You won");   break;	
	}
}

int confirm_retry(void)
{
	int x;

	printf("Wanna try it again? (0)...No (1)...Yes: ");
	scanf("%d", &x);

	return x;
}



int main(void)
{
    int i,total=0;
	int judge;				
	int retry=1;				
    int *result_j=NULL;
    int *result_w=NULL;

	initialize();

    result_j=realloc(result_j,30*sizeof(int));
    if(result_j==NULL){
        printf("Allocating memory failed.\n");
        return 0;
    }

    result_w=realloc(result_w,30*sizeof(int));					
    if(result_w==NULL){
        printf("Allocating memory failed.\n");
        return 0;
    }

	for(i=0; retry == 1; i++){
        
        total++;
		jyanken();						

      
		
		printf("Mine was %s and yours was %s\n", hd[comp], hd[human]);
        result_j[i]=human;
        

		judge = (human - comp + 3) % 3;	
        result_w[i]=judge;

		count_no(judge);				

		disp_result(judge);				

		retry = confirm_retry();		

        
    }


    if(total>10){
        i=total-10;
        printf("\nShowing the results from the last 10 tries:\n\n");
    }
    else{
        i=0;
    }
    
    for(;i<total;i++){

        printf("%dst(th) try: ",i+1);
        switch (result_j[i])
        {
        case 0: printf("Your hand was %s. ",hd[0]); break;
        case 1: printf("Your hand was %s. ",hd[1]); break;
        case 2: printf("Your hand was %s. ",hd[2]); break;
        }

        switch (result_w[i])
        {
        case 0: printf("It was a draw.\n");break; 
        case 1: printf("It was a loss.\n");break; 
        case 2: printf("It was a win.\n");break; 
        }

    }
	printf("Result: %d wins %d losses %d draws\n", win_no, lose_no, draw_no);

    free(result_j);
    free(result_w);
	
    return 0;
}
