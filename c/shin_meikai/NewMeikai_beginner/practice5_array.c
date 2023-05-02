#include <stdio.h>

#define NUMBER 50
#define EXAM 3

void p3(){

    int i;
    int v[5] = {5,4,3,2,1};

    for(i=0; i<5; i++)
        printf("v[%d] = %d\n", i, v[i]);

}

void p4(){

    int i;
    int a[5] = {17,23,36};
    int b[5];

    for(i=0; i < 5; i++)
        b[5-i-1] = a[i];

    puts(" a   b");
    puts("--------");
    for(i=0; i<5;i++){

        printf("%4d%4d\n",a[i],b[i]);
    }
}

void p5(){

    double a;
    int b;
    a=b=1.5;
    printf("a = %5lf and b = %d",a,b);
}

void p7(){

    int i,j,no,elem;
    int tensu[NUMBER];

    do{
        printf("How many?");
        scanf("%d",&no);
        if(no > NUMBER || no < 0)
            printf("Enter a number between 1 and %d\n",NUMBER);
    }while(no > NUMBER || no < 0);

    for(i = 0; i < no; i++){

        printf("Enter the element for person %d: ",i+1);
        scanf("%d",&elem);
        tensu[i]=elem;

    }

    printf("{");

    for(i = 0; i < no; i++){

        printf("%d",tensu[i]);
        if(i+1==no){
            break;
        }
        printf(", "); 
        


    }

    printf("}");



}


void p10(){

    int i,j,no,multi;
    int array[4][3];
    int array2[3][4];

    printf("4*3 array:\n");

    for(i=0; i<4;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number for [%d][%d]",i,j);
            scanf("%d",&no);
            array[i][j] = no;
        }
    }
    printf("3*4 array:\n");

    for(i=0; i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            printf("Enter a number for [%d][%d]",i,j);
            scanf("%d",&no);
            array2[i][j] = no;
        }
    }

    puts("");

    for(i=0; i<4;i++){
        for (j = 0; j < 3; j++)
        {
                multi=array[i][j]*array2[j][i];
                printf("%d * %d = %d\n"\
                ,array[i][j],array2[j][i],multi);
        }
    }

}

void p11(){


    int i,j,jp,math,jpTotal,mathTotal,total;
    int array[6][2];

    for(i = 0; i < 6; i++){
        for(j = 0; j < 2; j++){
            if(j%2==0){
                printf("Person %d's score for Japanese: ",i);
                scanf("%d",&jp);
                array[i][j] = jp;
            }   
            else{
                printf("Person %d's score for math: ",i);
                scanf("%d",&math);
                array[i][j] = math;
            }
        }
    }
    for(i = 0; i < 6; i++){
        total=0;
        for(j = 0; j < 2; j++){
            if(j%2==0){
                jpTotal+=array[i][j];
                total+=array[i][j];
            }   
            else{
                mathTotal+=array[i][j];
                total+=array[i][j];
            }
            printf("Person %d's total: %d\n",i,total);
            printf("Person %d's average: %d\n",i,total/2);

        }
    }
    printf("Japanese total = %d\n",jpTotal);
    printf("Japanese average = %d\n",jpTotal/6);
    printf("Math total = %d\n",mathTotal);
    printf("Math average = %d\n",mathTotal/6);

}

void p12(){

    
    //storing students scores

    int no, i, j, k;
    int array[EXAM][4][3];
/*    do{
        printf("Enter the number of students: ");
        scanf("%d",no);

        if(no<0 || no>NUMBER)
            printf("Enter a number between 1 and %d.",NUMBER);

    }while( no<0 || no>NUMBER);
*/
    for(i=1;i<=EXAM;i++){

        printf("------Exam %d------\n",i);
        for(j=1;j<=4;j++){

            for (k = 1; k <=3 ; k++)
            {
                printf("Enter person %d's"
                " score for subject %d: ",j,k);
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    for(i=1;i<=EXAM;i++){

        printf("\n------Exam Result %d------\n",i);
        for(j=1;j<=4;j++){

            for (k = 1; k <=3 ; k++)
            {
                printf("Person %d's score"
                " for subject %d is %d\n",j,k,array[i][j][k]);            }
        }
    }
    
    puts("");

}

int main(void){

//array initialization
int tensu1[3][2]={{1,2},{2,3},{4,5}};
printf("tensu1[2][1] = %d",tensu1[2][1]);

/*
    p3();
    p4();
    p5();
    p7();
    p10();
    p11();
    */
    p12();
    return 0;

}