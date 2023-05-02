#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int human;		
int comp;		
int win_no;		
int lose_no;	
int draw_no;	

char *hd[] = {"Rock", "Paper","Scissors"};		

void initialize(void);
void jyanken(void);
void calc_results(int);
void show_results(int);

void initialize(void){

    win_no=0;
    lose_no=0;
    draw_no=0;

}

void jyanken(){

    if( win_no==0&&lose_no==0&&draw_no==0){
        comp=0;
    }
    else{
        do{
            comp=rand()%3;
        
        }while(comp==1);
    }
    do{

        printf("Rock, Paper, Scissors!\n");
        for(int i=0; i<3; i++){
            printf("(%d) %s ",i,hd[i]);
        }
        printf(":");
        scanf("%d",&human);
        
    }while(!(human>=0&&human<=2));


}

void calc_results(int judge){

    switch (judge)
    {
    case 0: draw_no++; break;
    case 1: win_no++; break;
    case 2: lose_no++; break;
    }

    switch (judge)
    {
    case 0: puts("Draw\n");break;
    case 1: puts("Win!\n");break;
    case 2: puts("Loss!\n");break;
    }


}


int main(void)
{

    initialize();

    srand(time(NULL));
    int rounds,judge;
    printf("How many rounds of Jyanken do you wanna play?: ");
    scanf("%d",&rounds);
    
    while(rounds--){

        jyanken();

        printf("Mine was %s and yours was %s\n", hd[comp], hd[human]);
        judge=(human-comp+3)%3;
        calc_results(judge);

    }


    printf("Wins...%d times Losses...%d times Draws... %d times\n"
    ,win_no,lose_no,draw_no);

    return 0;
}
