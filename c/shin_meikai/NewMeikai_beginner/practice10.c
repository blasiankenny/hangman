#include <stdio.h>

void sum(int a,int b,int c){

    a=a+b+c;

}

void adjust_point(int *n){

    if(*n<0){
        *n=0;
    }
    else if(*n>100){
        *n=100;
    }

}

void increment_date(int *y,int *m, int *d){

    if(*m!=2&&*m!=4&&*m!=6&&*m!=9&&*m!=11){
        if(*d!=31){
            *d=*d+1;
        }
        else{
            if(*m!=12){
                *d=1;
                *m+=1;
            }
            else{
                *d=1;
                *m=1;
                *y+=1;
            }
        }
    }
    else{

        if(*m==2){

            if(*y%4!=0){

                if(*d!=28){
                    *d+=1;
                }
                else{
                    if(*m!=12){
                        *d=1;
                        *m+=1;
                    }
                    else{
                        *d=1;
                        *m=1;
                        *y+=1;
                    }
                }

            }
            else{//leap year

                if(*d!=29){
                    *d++;
                }
                else{
                    if(*m!=12){
                        *d=1;
                        *m+=1;
                    }
                    else{
                        *d=1;
                        *m=1;
                        *y+=1;
                    }
                }

            }
        }
        if(*d!=30){
            *d+=1;
        }
        else{
            if(*m!=12){
                *d=1;
                *m+=1;
            }
            else{
                *d=1;
                *m=1;
                *y+=1;
            }
        }

    }

}


void sort3(int *a, int *b, int *c){

    int temp;
    if(*a>*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*a>*c){
        temp=*a;
        *a=*c;
        *c=temp;
    }
    if(*b>*c){
        temp=*b;
        *b=*c;
        *c=temp;
    }
    


}

void ary_set(int v[], int n, int val)
{
    int i;

    for(i = 0; i < n; i++)
        v[i] = val;
}

void set_idx(int *v, int n){

    for(int i=0; i<n; i++){

        v[i]=i;

    }

}

int main(void){
/*
    int n;
    double x;
    int a[3];

    printf("n's address: %p\n",&n);
    printf("x's address: %p\n",&x);
    printf("a[0]'s address: %p\n",&a[0]);
    printf("a[1]'s address: %p\n",&a[1]);
    printf("a[2]'s address: %p\n",&a[2]);

    int sato=178;
    int sanaka=175;
    int masaki=179;

    int *isako,*hiroko;

    isako=&sato;
    hiroko=&sanaka;

    isako=&masaki;
    *hiroko=180;

    printf("%d\n",sato);
    printf("%d\n",sanaka);
    printf("%d\n",masaki);
    printf("%d\n",*isako);
    printf("%d\n",*hiroko);


    //practice10-1

    int n;
    printf("Enter a value for n:");
    scanf("%d",&n);
    adjust_point(&n);
    printf("n = %d\n",n);

    //practice10-2

    int y,m,d;
    printf("Enter a year:");
    scanf("%d",&y);
    printf("Enter a month:");
    scanf("%d",&m);
    printf("Enter a date:");
    scanf("%d",&d);
    
    printf("The day after %d/%d/%d is :\n",y,m,d);
    increment_date(&y,&m,&d);
    printf("%d/%d/%d\n",y,m,d);


    //practice10-3
    int a=2,b=5,c=1;

    sort3(&a,&b,&c);

    printf("a=%d b=%d c=%d\n",a,b,c);
*/
    //List10-9
    int i;
    int a[5] = {1,2,3,4,5};
    int *p;
    p=a;

    for(i=0;i<5;i++){
        printf("&a[%d] = %p  p+%d = %p\n",i,&a[i],i,p+i);
        printf("p[%d]: %d\n",i,p[i]);
        printf("*p(%d): %d\n",i,*(p+i));
    }


    for(i=0;i<5;i++){
        printf("a[%d] = %d *(a+%d) = %d  p[%d] = %d *(p+%d) = %d\n",
                i,a[i],i,*(a+i),i,p[i],i,*(p+i));
    }
    for(i=0;i<5;i++){
        printf("&a[%d] = %p a+%d = %p  &p[%d] = %p p+%d = %p\n",
                i,&a[i],i,a+i,i,&p[i],i,p+i);
    }


    int n;
    printf("How many elements do you want in an array? ");
    scanf("%d",&n);

    int array[n];
    
    set_idx(array,n);
    for(int i=0;i<n;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }

    //practice10-5
    

    ary_set(&a[2],2,99);
    /*ary_set(&a[2],2,99)を渡しいる。
    すなわち a[0] = a[2]のアドレスと判断する。
    n = 2 の為、a[2],a[3]の数字を入れ替え返す*/

    for(i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}