#include <stdio.h>

int main()
{

    /*5-1*/
    double cel;

    printf("Enter the temparature in celsius:\n");
    scanf("%lf",&cel);

    printf("The temp is fahrenheit is %lf\n",(9.0/5.0)*cel+32.0);

    /*5-2*/
    double PI = 3.14;
    double rad;
    printf("Enter a radius:\n");
    scanf("%lf",&rad);
    printf("The area is %lf\n",(4.0/3.0)*PI*rad*rad*rad);
    return 0;
}