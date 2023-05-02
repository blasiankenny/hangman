#include <stdio.h>
void p6(){
    //practice 3-6
    int n1,n2,n3,max;
    puts("Enter 3 numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    max=n1;
    if(max<n2) max=n2;
    if(max<n3) max=n3;
    printf("max is %d\n",max);
}

void p7(){
    int n1,n2,n3,n4,max;
    puts("Enter 4 numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    max=n1;
    if(max<n2) max=n2;
    if(max<n3) max=n3;
    if(max<n4) max=n4;
    printf("max is %d\n",max);
}
int main(void){

    //3-1

    int no;
    no = 12;

    if(no%2==0) printf("It's even");
    else printf("It's odd");

    int max,no1 = 4, no2 = 38;
    max= (no1>no2) ? no1:no2;
    printf("\nmax is %d\n",max);

    p6();
    p7();
    return 0;
}