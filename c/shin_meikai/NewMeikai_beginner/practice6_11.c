#include <stdio.h>

#define NUMBER 5

int idx[NUMBER];

int search_idx(const int v[], int idx[], int key, int n)
{
    int x = 0;
    for(int i = 0; i < n; i++){
        
        if(v[i] == key){
            idx[x] = i;
            x++;
        }
    }
    return x;
}

int main(void)
{
    int i,key,n = 0;
    int v[NUMBER];
    
    for(i = 0;i < NUMBER; i++){
        printf("v[%d]：",i);
        scanf("%d",&v[i]);
    }
    printf("Key：");
    scanf("%d",&key);

    n = search_idx(v,idx,key,NUMBER);

    printf("The number of indices of key is %d\n",n);
    printf("idx{");

    for(i = 0;i < n; i++){
        if(i == n - 1){
            printf("%2d",idx[n - 1]);
            break;
        }
        printf("%2d,", idx[i]);
    }
    printf("}\n");
    
    return 0;

}