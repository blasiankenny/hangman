// ラックナンバーサーチ　前回の日時、最高得点を求める。

#include <stdio.h>
#include <time.h>
#include <float.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h>

#define MAX_STAGE       10
#define swap(type, x, y)        do{ type t = x; x = y; y = t; } while (0)
#define MAX_NUM         10

char dtfile[] = "LACKNUM.DAT";  //　ファイル名
char dtfile2[] = "LACKNUM2.DAT"; // 最高記録用のファイル
double score2;

//　過去のとれーにんぐ情報を取得・表示して得点を返す。

double get_data(void)
{
        FILE *fp, *fp2;
        double best, best2;             //最高得点

        if((fp = fopen(dtfile, "rb")) == NULL){
                printf("ファイルを作成します。\n\n");
                best = DBL_MAX;
        }else{
                int i;
                struct tm local;
                double line[256];

                printf("\n過去の履歴\n-------------------------- \n");

                while((i = fread(&local, sizeof(struct tm), 1, fp)) > 0 ){
                        printf("%d年 %d月 %d日 %d時 %d分 %d秒\n",
                                local.tm_year + 1900, local.tm_mon + 1,
                                local.tm_mday, local.tm_hour, local.tm_min, local.tm_sec);
                fread(&best, sizeof(double), 1, fp);
                        printf("得点（所要時間）は%.1f秒\n\n", best);
                }
                fclose(fp);
        }

        if((fp2 =fopen(dtfile2, "rb")) == NULL){
                printf("ファイルを作成します。 \n\n");
                best = DBL_MAX;
        }else{
                struct tm local2;

                 fread(&local2, sizeof(struct tm), 1, fp2);
                        printf("最高記録は%d年 %d月 %d日 %d時 %d分 %d秒\n",
                                local2.tm_year + 1900, local2.tm_mon + 1,
                                local2.tm_mday, local2.tm_hour, local2.tm_min, local2.tm_sec);
                fread(&best2, sizeof(double), 1, fp2);
                        printf("得点（所要時間）は %.1f秒です。\n", best2);
        fclose(fp2);
　　　　}

        return (best);
}

// 今回のトレーニング情報を書き込む
void put_data(double best, double best2)
{
        FILE *fp, *fp2;
        time_t t = time(NULL);
        struct tm *local = localtime(&t);

        if((fp = fopen(dtfile, "ab")) == NULL){
                printf("ファイルがあーりません");
                fflush(stdout);
        }else{
                fwrite(local, sizeof(struct tm), 1, fp);
                fwrite(&best, sizeof(double), 1, fp);
                fclose(fp);
        }

        if(best <= best2){
                if((fp2 = fopen(dtfile2, "wb")) ==NULL){
                        printf("ファイルがあーりません");
                        fflush(stdout);
                }else{
                        fwrite(local, sizeof(struct tm), 1, fp2);
                        fwrite(&best2, sizeof(double), 1, fp2);
                        fclose(fp2);
                }
        }

}

// トレーニングを実行して得点を返す。
double go(void)
{
        int i, j, stage;
        int dgt[9] = {1,2,3,4,5,6,7,8,9};
        int a[8];
        double jikan;                   // 時間;
        clock_t start, end;             // 開始、終了時刻

        printf("欠けている数字を入力してください。\n");
        printf("スペース>エンターで練習開始\n");
        while(getchar() != ' ')
                ;

        start = time(NULL);

        for(stage = 0; stage < MAX_STAGE; stage++){
                int x = rand() % 9; // 0～8の乱数を発生
                int no;                 // 読み込んだ値

                i = j = 0;
                while(i < 9){
                        if(i != x)              //dgt[x]を飛ばしてコピー
                                a[j++] = dgt[i];
                        i++;
                }

                for(i = 7; i > 0; i--){         // 配列aをコピー
                        int j = rand() % (i + 1);
                        if(i != j)
                                swap(int , a[i], a[j]);
                }

                printf("%d回目：", stage+1);
                for(i = 0; i < 8; i++)                  //全要素を表示
                        printf("%d", a[i]);
                printf(" : ");

                do{
                        scanf("%d", &no);
                }while (no != dgt[x]);
        }

        end = time(NULL);

        jikan = (double)difftime(end, start);

        printf("%.1f秒かかりました。\n", jikan);

        if(jikan > 30.0)
                printf("おそい？。\n");
        else if(jikan > 25.0)
                printf("もうちょいがんばれ。 \n");
        else if(jikan > 15.0)
                printf("いいね。 \n");

        return (jikan);
}

int main(void){

        int retry;                      // もう1度？
        double score;           // 得点
        double best;            // 最高得点

        best = get_data();

        srand(time(NULL)*getpid());

        score = go();                   // トレーニング実行

        if(score < best){
                printf("最高得点（所要時間）を更新しました。\n\r");
                best = score;
        }

        put_data(score, best);

        return 0;
}