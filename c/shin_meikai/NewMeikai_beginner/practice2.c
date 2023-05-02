#include <stdio.h>

int main(void){

    //2-1
    double n1,n2;
    printf("Enter two numbers\n");
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    printf("%f is %f%% of %f",n1,n1/n2*100,n2);

    //2-2
    int a,b;
    a=3;
    b=4;

    printf("\n%lf\n",(double)(a+b));

    int num1=828324;
    double num2=234.42;
    printf("num1 is %5d\n",num1);
    printf("num2 is %04.1lf\n",num2);


    return 0;
}