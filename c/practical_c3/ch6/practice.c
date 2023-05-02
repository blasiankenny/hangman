#include <stdio.h>
#include <math.h>
int main()
{

    /*6-1*/
    printf("The squared distance of the two values is: %.1lf\n",(double)(2+3)*(2+3));
    printf("The sqrt of it is: %.1lf\n",sqrt(25));


    /*6-2 6-3*/
    int score;
    printf("Enter a score:\n");
    scanf("%d",&score);
    if(score>=91){
        printf("A");
        if(1<=score%10&&score%10<=3){
            printf("-");
        }else if(8<=score%10&&score%10<=9||score%10==0){
            printf("+");
        }
    }else if(score>=81){
        printf("B");
        if(1<=score%10&&score%10<=3){
            printf("-");
        }else if(8<=score%10&&score%10<=9||score%10==0){
            printf("+");
        }
    }else if(score>=71){
        printf("C");
        if(1<=score%10&&score%10<=3){
            printf("-");
        }else if(8<=score%10&&score%10<=9||score%10==0){
            printf("+");
        }
    }else if(score>=61){
        printf("D");
        if(1<=score%10&&score%10<=3){
            printf("-");
        }else if(8<=score%10&&score%10<=9||score%10==0){
            printf("+");
        }
    }else{
        printf("F");
    }
    printf("\n");

    /*6-4*/
    double dollar = 1234.69;


    int cents,q,d,n,p;
    cents=((int)(dollar*100)%100);
    q=cents/25;
    d=cents%25/10;
    n=cents%25%10/5;
    p=cents%25%10%5;

    printf("# of quarters: %d\n# of dimes: %d\n"
    "# of nickels: %d\n# of pennies: %d\n",q,d,n,p);
    
    /*6-5*/
    int year = 400;

    if(year>=100){
        if(year%4==0){
            if(year%100==0&&year%400!=0){
            printf("It's not a leap year\n");
            }else{
            printf("It's a leap year\n");
            }
        }else{
            printf("It's not a leap year\n");
        }
        
    }else{
        if(year%4==0){
            printf("It's a leap year\n");
        }
        else{
            printf("It's not a leap year\n");
        }
    }

    /*6-6*/
    int hours=0;
    int total=0;
    double wage=12.80;
    for(int i=0; i<7; i++){
        printf("Enter the hours you worked for the %d day of the week:",i+1);
        scanf("%d",&hours);
        total+=hours;
    }
    printf("total= %d\n",total);

    if(total<40){
        printf("The total money you earned this week is: %lf",total*wage);
    }else{
        printf("The total money you earned this week is: %lf",(total-40)*wage*1.5+40*wage);
    }
    return 0;
}