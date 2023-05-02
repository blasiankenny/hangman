#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sqr(x) ((x)*(x))
#define diff(x,y) (((x)>(y)) ? ((x)-(y)):((y)-(x)))
#define swap(type, a, b) do{type t = a ; a = b ; b = t;}while(0)

enum season {Summer, Fall, Winter, Spring, Invalid};

void bsort(int a[], int n){

    int i,j;

    //my solution
    for ( i = 0; i < n-1; i++)
    {
        for( j = 0; j < n-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    //another way
    for(i = n - 1; i > 0; i--){
        for(j = 0; j < i ; j++){
            if(a[j + 1] > a[j]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
}

void
 storeRandoms(int array[], int random, int n){

    srand(n);
    
         
    for(int i=0;i<n;i++){
        random = rand();
        array[i] = random;
        printf("random = %d\n",random);
    }
}

void summer(void){
    puts("It's hot!!!!! I want ice cream!\n");
}
void fall(void){
    puts("Autumn leaves look so beautiful!!\n");
}
void winter(void){
    puts("It's cold!!!!! I want some warmer cloths!\n");
}
void spring(void){
    puts("Graduation season in Japan! Cherry blossoms look nice!\n");
}

enum season select(void){

    int s;
    do{

        printf("Select the current season:\n"
        "summer...0 fall...1 winter...2 spring...3 quit...4\n");
        scanf("%d",&s);
    }while((s<Summer || s>Invalid));

    return s;

}

int factorial(int fac){

    int result=1;

    for(int i = fac; i > 1; i--){
        result=result*(i);
    }
    return result;
}


int combination(int n, int r)
{
    if(n == 0 || r == 0)
        return 1;
    else
        return combination(n,r-1) * (n - r + 1) / r;
}

int gcd(int x, int y)
{
    int r;

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(void){
/*
    int a = 3;
    int b = 4;
    printf("a*a = %d\n",sqr(a));
    printf("diff: %d\n",diff(4,7));
    swap(int, a,b);
    printf("a= %d b= %d\n",a,b);

    //practice8-4
    int n,i;
    
    printf("How many elements do you want in the array?:");
    scanf("%d",&n);

    int array[n];
    int random;

    storeRandoms(array,random,n);
    bsort(array,n);
    printf("Sorted array: \n");

    for (i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }


    //8-5
    enum season selected;

    do{
        switch(selected=select()){

            case Summer : summer(); break;
            case Fall : fall(); break;
            case Winter : winter(); break;
            case Spring : spring(); break;
        }
    }while(selected!=Invalid);
    

    //8-6
    int fac,result=1;
    printf("Which number do you want the factorial of?\n");
    scanf("%d",&fac);
    printf("Factorial of %d is %d\n",fac, factorial(fac));


    //8-7
    int r;

    printf("How many integers?:"); scanf("%d",&n);
    printf("How many will you choose: "); scanf("%d",&r);

    printf("There are %d ways to choose numbers\n",combination(n,r));

    //8-8
    int tmp;

    printf("Look for the gcd of the two numbers:\n");
    printf("Integer a :"); scanf("%d",&a);
    printf("Integer b :"); scanf("%d",&b);

    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    printf("The greatest common divisor is %d",gcd(a,b));

    int ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }

*/

    int i, ch;
    int cnt[10] = {0};

    while((ch = getchar())!=EOF){
        switch (ch){
        case '0' :cnt[0]++;break;
        case '1' :cnt[1]++;break;
        case '2' :cnt[2]++;break;
        case '3' :cnt[3]++;break;
        case '4' :cnt[4]++;break;
        case '5' :cnt[5]++;break;
        case '6' :cnt[6]++;break;
        case '7' :cnt[7]++;break;
        case '8' :cnt[8]++;break;
        case '9' :cnt[9]++;break;
        }
    }

    puts("The number of the times each number appeared for:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("'%d' : %d\n",i,cnt[i]);
    }
    
    return 0;
}

