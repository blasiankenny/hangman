#include <stdio.h>
#define NUMBER 5
int tensu[]={1,2,3,4,5};
int tensu2[]={10,20,30,40,50};
int idx[NUMBER];//All 5 indices are initialized as 0's 

double array[NUMBER];
int count;


int min2(int a, int b){
    return a<b ? a:b;
}

int min3(int a, int b, int c){

    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;
    return min;
}

int sqr(int a){
    return a*a;
}

int cube(int a){

    return sqr(a)*a;
}

int pow4(int a){
    return cube(a)*a;
}

int sumup(int a){

    int sum=0;
    while(a>0){
        sum+=a--;
    }

    return sum;
}

void alert(int n){

    while (n-->0)
    {
        putchar('*');
    }
    puts("");
}

void hello(void){

    printf("Hello\n");
}

int min_of(int v[], int a){

    if(a==0)
        return 0;
    int min=v[a-1];
    for(int i = a-2; i>=0; i--){
        if(min>v[i]){
            min=v[i];
            printf("min = %d\n",min);
        }
    }
    return min;
}

void rev_intary(int v[], int n){

    int temp;

    if(n==0)
        return;

    for(int i = n-1; i > n/2; i--){
        temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
  

}

void intary_rcpy(int v1[], const int v2[], int n){

    if(n==0)
        return;

    for(int i = n-1; i >=0; i--){
        v1[n-i-1] = v2[i];
    }
}

int search_idx(const int v[], int idx[], int key, int n){

    int i,num=0;
    
    for(i=0;i<n;i++){
        if(v[i]==key){
            idx[num]=i;
            num++;
        }
    }

    return num;

}

void mat_mul(const int a[4][3], const int b[3][4], int c[4][3]){

    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            c[i][j] = a[i][j]*b[j][i];
        }
    }

}


void put_count(){

    printf("put_count: %d'th time.\n",count);
    count++;

}

int main(void){

    //declared and initialized globally
    extern int tensu[];
    printf("tensu[0] = %d\n",tensu[0]);
    int a=2, b=3,c=1;
    //6-1
    printf("The minimum number is %d\n",min2(a,b));
    //6-2   
    printf("The minimum number is %d\n",min3(a,b,c));
    //6-3
    printf("%d cubed is %d\n",a,cube(a));
    //6-4
    printf("%d to the 4 is %d\n",b,pow4(b));
    //6-5
    printf("Sum of the numbers from 1 to %d is %d\n",b,sumup(b));
    //6-6
    alert(10);
    //6-7
    hello();
    //6-8
    int array[]={2,5,6,3,6,8,10};
    printf("The minimum of the array is %d\n",min_of(array,7));
    //6-9
    rev_intary(tensu,NUMBER);
    printf("Reversed tensu[]:\n");
    for(int i=0;i<5;i++){
        printf("tensu[%d] = %d\n",i,tensu[i]);
    }
    //6-10
    intary_rcpy(tensu,tensu2,NUMBER);
    printf("Copied tensu[]:\n");

    for(int i=0;i<5;i++){
        printf("tensu[%d] = %d\n",i,tensu[i]);
    }

    //6-11
    extern int idx[];
    int key,n;

    printf("Enter key: ");
    scanf("%d",&key);
    printf("Number of indices: %d\n",n=search_idx(tensu,idx,key,NUMBER));

    printf("The number of indices of the key is %d\n",n);
    printf("idx{");

    for(int i = 0;i < n; i++){
        if(i == n - 1){
            printf("%d",idx[n - 1]);
            break;
        }
        printf("%2d,", idx[i]);
    }
    printf("}\n");

    //6-12
    int result[4][3]={{1,2,3},{4,5,6},{1,2,3},{1,2,3}};
    int result2[3][4]={{1,2,3,4},{4,5,6,7},{1,2,3,4}};
    int mult[4][3];

    mat_mul(result,result2,mult);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("mult[%d][%d] = %d\n",i,j,mult[i][j]);        
        }
        
    }

    //6-13
    static double array2[NUMBER];

    for (int i = 0; i < NUMBER; i++)
    {
        printf("array[%d] = %f\n",i,array[i]);
        printf("array2[%d] = %f\n",i,array2[i]);
    }
    

    //6-14
    

    for(int i=0;i<NUMBER; i++){

        put_count();

    }

    return 0;
}