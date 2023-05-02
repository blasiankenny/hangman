#include<stdio.h>

#define N 10

int main(void)
{
    FILE *fp;
    int i;
    double pi[N] = {0,1,2,3,4,5,6,7,8,9};

    if((fp = fopen("PI.bin", "wb")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else{
        fwrite(pi, sizeof(double), N, fp);
        fclose(fp);
    }

    if((fp = fopen("PI.bin", "rb")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else{
        fread(pi, sizeof(double), N, fp);
        puts("配列の内容は：");
        for(i = 0; i < N; i++)
            printf("fp[%d] = %23.21lf\n", i, pi[i]);
        fclose(fp);
    }
    return 0;
}