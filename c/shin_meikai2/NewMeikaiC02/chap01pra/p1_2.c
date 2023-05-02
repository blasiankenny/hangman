#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{


    srand(time(NULL));
    int omikuji=rand()%7;
    if(omikuji>3){
        omikuji=rand()%7;
    }
    int num;
    do{
        printf("Please enter a number between 1 and 6 for omikuji\n");
        scanf("%d",&num);
        if(!(1<=num&&num<=6))
            printf("\aInvalid input\n");
    }while(!(1<=num&&num<=6));

    if(num==0)
        printf("Daikichi!!!!!!");
    else if(num==1)
        printf("Tchukichi!!!!!");
    else if(num==2)
        printf("Shokichi!!!!");
    else if(num==3)
        printf("kichi!!!");
    else if(num==4)
        printf("Suekichi!!");
    else if(num==5)
        printf("Kyo!");
    else
        printf("Daikyo.");



	return 0;
}
