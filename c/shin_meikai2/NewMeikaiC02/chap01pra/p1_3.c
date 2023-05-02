#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{

    srand(time(NULL));
    long num,ans,limit=15;
    ans=-999+rand()%1999;
    
    do{
        printf("Please enter a number between -999 and 999\n");
        scanf("%d",&num);
        if(!(ans==num)){
            if(num>ans){
                printf("\aLess than that\n");
            }
            else{
                printf("\aBigger than that\n");
            }
        }
        else{
            printf("Congrats!!!!!\n");
            return 0;
        }
        limit--;
    }while(!(ans==num)&&limit>0);

    printf("You lost.... too bad!\n");


	return 0;
}

