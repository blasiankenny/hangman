#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{

    srand(time(NULL));
    long min,max,temp,ans,num,limit,diff,level;

    printf("Enter the level: (1)1~9 (2)1~99 (3)1~999 (4)1~9999\n");
    scanf("%d",&level);

    if(level==4){
        min = 1+rand()%9999;
        max = 1+rand()%9999;
    }
    else if(level==3){
        min = 1+rand()%999;
        max = 1+rand()%999;
    }
    else if(level==2){
        min = 1+rand()%99;
        max = 1+rand()%99;
    }
    else{
        min = 1+rand()%9;
        max = 1+rand()%9;
    }
   

    if(min>max){
        temp=min;
        min=max;
        max=temp;
    }

    diff=max-min;
    
    if(diff>1000){
        limit=15;
    }
    else if(diff>100){
        limit=10;
    }
    else{
        limit=5;
    }

    ans=min+rand()%(diff+1);

    while(!(ans==num||limit==0)){
        printf("Enter the number between %d and %d (%d tries left)\n",min,max,limit);
        scanf("%d",&num);
        
        if(ans==num){
            printf("Congrats!!\n");
            return 0;
        }
        else{
            if(num>ans){
                printf("Less than that number\n");
            }
            else{
                printf("Greater than that number\n");
            }
        }

        limit--;
    }
    
    printf("You lost...\n");
   
	return 0;
}

