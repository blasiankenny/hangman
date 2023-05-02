#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{

    srand(time(NULL));
    long num,ans,limit=15;
    ans=(1+rand()%333)*3;
    
    do{
        printf("Please enter a multiple of 3 between 3 and 999\n");
        scanf("%d",&num);
        if(num%3!=0){
            printf("\aThe number has to be a multiple of 3\n");
            //return 0;
            continue;
        }
        else if(!(ans==num)){
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

