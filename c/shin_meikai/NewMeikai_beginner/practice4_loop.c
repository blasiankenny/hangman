#include <stdio.h>

void p6(){
    //practice 4-6
    int i=0,no,no2=0;
    printf("Enter a number: ");
    scanf("%d",&no);

    while(i<=no){
        if(i%2==0&&i>0)
            printf("%d ",i);
        i++;
    }
    puts("");
}
void p7(){

    //practice 4-7
    int i=2,no,no2=0;
    printf("Enter a number: ");
    scanf("%d",&no);

    while(i<=no){
        printf("%d ",i);
        i=i*2;
    }

        puts("");

}
void p8(){

    int no;
    //practice 4-8
    printf("Enter positive integers: ");
    scanf("%d",&no);

    while(no-- >= 1){
        putchar('*');
    }
    puts("");


}

void p9(){

    int no;
    printf("Enter a number: ");
    scanf("%d",&no);

    while(no-->0){
        if(no%2==0) putchar('+');
        else putchar('-');
    }

    puts("");

}

void p10(){

    int no;
    printf("Enter a number: ");
    scanf("%d",&no);

    while(no-->0){
        printf("*\n");
    }

}

void p11(){

    //practice 4-11
    int no;
    do{
    printf("Enter a positive integer: ");
    scanf("%d",&no);
    if(no<=0)
        printf("The number should be positive\n");
    }while(no<=0);

    printf("Reversed %d is ",no);

    while(no>0){

        printf("%d",no%10);
        no/=10;
    }

    puts("");

}

void p12(){

    //practice 4-12
    int no,count=0;
    do{
    printf("Enter a positive integer: ");
    scanf("%d",&no);
    if(no<=0)
        printf("The number should be positive\n");
    }while(no<=0);

    printf("%d has ",no);

    while(no>0){

        count+=1;
        no/=10;
    }

    printf("%d digits\n",count);

}

void p13(){

    int no,total;

    do{
    printf("Enter a number: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);

    for(int i =1; i<=no;i++)
        total+=i;

    printf("Sum of the numbers between 1 and %d is %d\n",no,total);

}


void p14(){

    int no,total;

    do{
    printf("Enter a number: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);

    for(int i=1;i<=no;i++)
        printf("%d",i%10);

    puts("");

}

void p20(){

    printf("   |  1   2   3   4   5   6   7   8   9\n\
---|-----------------------------------");

    for(int i = 1; i <= 9;i++){
        printf("\n %d | ",i);
        for(int j = 1; j <= 9; j++){
            if(i*j/10<=0)
                printf(" ");
            printf("%d  ",i*j);
        }

    }

    puts("");
}

void p21(){


    int no;
    do{
    printf("Enter a number for the right squere: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);

    for (int i = 0; i < no; i++){
        for (int j = 0; j < no; j++)
            printf("* ");
        puts("");   
    }
        
    

}

void p23(){

    int no,i,j,k;
    do{
    printf("Enter a number: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);


    for (i = 0; i < no; i++){
            for (k = no; k > i; k--)
                printf("*");         
            puts("");  
    }
    

    puts("");
    for(i = 0; i < no; i++){
            for (k = 0; k < i ; k++)
                printf(" ");   
            for (j = 0; j < no-i; j++)
                printf("*");      
            puts("");  
    }



}

void p24(){

    int no,count,i,k;
    do{
    printf("Enter a number for the pyramid: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);


    for(i=1;i<=no;i++){
        count = (i-1)*2+1;
        for (k = 0; k < no-i ; k++)
                printf(" ");
        for (k = count; k > 0 ; k--)
                printf("*");
        for (k = 0; k < no-i ; k++)
                printf(" ");
        puts("");
    }


}

void p25(){

    int no,count,i,k;
    do{
    printf("Enter a number for the pyramid: ");
    scanf("%d",&no);
    if(no<=0)
        printf("*Enter a positive number\n");
    }while(no<=0);


    for(i=1;i<=no;i++){
        count = (no-i)*2+1;
        for (k = i; k > 1  ; k--)
                printf(" ");
        for (k = 0; k < count ; k++)
                printf("*");
        for (k = i; k > 1  ; k--)
                printf(" ");
        puts("");
    }
}

int main(void){

    //p6();
    //p7();
    //p8();
    //p9();
    //p10();
    //p11();
    //p12();
    //p13();
    //p14();
    //p20();
    //p21();
    //p23();
    //p24();
    p25();
    return 0;
}