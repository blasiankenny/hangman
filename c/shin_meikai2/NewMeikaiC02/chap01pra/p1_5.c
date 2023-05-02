#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{

    srand(time(NULL));
    long min,max,temp,ans,num,limit,diff;
    min = rand();
    max = rand();

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

