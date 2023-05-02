#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{

    srand(time(NULL));
    long num,ans,limit=15;
    long temp[3];

    do{
        ans=rand()%1000;
        if(ans>99){
            temp[0]=ans/100;
            temp[1]=(ans%100)/10;
            temp[2]=ans%10;
            if(temp[0]!=temp[1]&&temp[0]!=temp[2]&&temp[1]!=temp[2]){
                break;
            }
        }
        else if(ans>9){
            temp[0]=ans/10;
            temp[1]=ans%10;
            if(temp[0]!=temp[1]){
                break;
            }
        }
        else{
            break;
        }
        

    }while(1);
    printf("ans = %d\n",ans);
    do{
        printf("Please enter a number between 0 and 999\n");
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

