/* 左右方向視野拡大訓練を兼ねた暗算トレーニング */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define NUMBER 3

int main(void)
{
    int stage;
    int a, b, c, z; /* 加算する数値 */
    int x;          /* 読み込んだ値 */
    int n;          /* 余白の幅 */
    double total = 0;
    int periods[10];
    clock_t start, end, temps, tempe; /* 開始時刻・終了時刻 */

    srand(time(NULL)); /* 乱数の種を設定 */

    printf("Start!!\n");
    start = clock(); /* 計測開始 */

    for (stage = 0; stage < NUMBER; stage++)
    {
        a = 10 + rand() % 90; /* 10～99の乱数を生成 */
        b = 10 + rand() % 90; /* 　　　　〃　　　　 */
        c = 10 + rand() % 90; /* 　　　　〃　　　　 */
        n = rand() % 17;      /*  0～16の乱数を生成 */
        z = 1 + rand() % 4;
        if (z == 1)
        {
            printf("%d%*s+%*s%d%*s+%*s%d: ", a, n, "", n, "", b, n, "", n, "", c);
        }
        else if (z == 2)
        {
            printf("%d%*s+%*s%d%*s-%*s%d: ", a, n, "", n, "", b, n, "", n, "", c);
        }
        else if (z == 3)
        {
            printf("%d%*s-%*s%d%*s+%*s%d: ", a, n, "", n, "", b, n, "", n, "", c);
        }
        else
        {
            printf("%d%*s-%*s%d%*s-%*s%d: ", a, n, "", n, "", b, n, "", n, "", c);
        }
        temps = clock();
        do
        {
            scanf("%d", &x);
            if (z == 1 && x == a + b + c)
                    break;
            else if (z == 2 && x == a + b - c)
                    break;
            else if (z == 3 && x == a - b + c)
                    break;
            else if(x == a - b - c)
                    break;
            printf("\aWrong. Enter again:");
        } while (1);
        tempe = clock();
        periods[stage] = (double)(tempe - temps) / CLOCKS_PER_SEC;
        total += (double)periods[stage];
    }

    end = clock(); /* 計測終了 */

    printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    for (int i = 0; i < NUMBER; i++)
    {
        printf("Time for stage %d: %d seconds\n", i, periods[i]);
    }
    printf("Avarage time you took was: %f\n", total / NUMBER);
    return 0;
}
