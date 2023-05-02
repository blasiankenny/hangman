/* 英単語学習ソフト（問題点が潜む）*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define QNO  12		/* 単語の数 */
#define CNO   4		/* 選択肢の数 */

/*--- 日本語 ---*/
char *jptr[] = {
	"動物", "車",	"花",	"家",	"机",	"本",
	"椅子", "父",	"母",	"愛",	"平和",	"雑誌",
};

/*--- 英語 ---*/
char *eptr[] = {
	"animal", "car",	"flower", "house", "desk",	"book",
	"chair",  "father",	"mother", "love",  "peace",	"magazine",
};

/*--- 選択肢を表示 ---*/
void print_cand(const int c[], int sw)
{
	int i;

	for (i = 0; i < CNO; i++)
		printf("(%d) %s  ", i, sw ? jptr[c[i]] : eptr[c[i]]);
	printf("：");
}

/*--- 選択肢を生成して正解の添字を返す ---*/
int make_cand(int c[], int n)
{
	int	i;

	c[0] = n;					/* 先頭要素に正解を入れて */
	for (i = 1; i < CNO; i++)	/* それ以降の要素は */
		c[i] = rand() % QNO;	/* 0以上QNO未満の値 */

	return 0;
}

int main(void)
{
	int nq, pq;			/* 問題の番号・前回の問題番号 */
	int na;				/* 正解の番号 */
	int sw;				/* 問題の言語（0：日本語／1：英語） */
	int retry;			/* 再挑戦するか？ */
	int cand[CNO];		/* 選択肢の番号 */

	srand(time(NULL));	/* 乱数の種を設定 */

	pq = QNO;			/* 前回の問題番号（存在しない番号） */

	do {
		int no;

		do {						/* 出題する単語の番号を決定 */
			nq = rand() % QNO;
		} while (nq == pq);			/* 同じ単語を連続して出題しない */

		na = make_cand(cand, nq);	/* 選択肢を生成 */
		sw = rand() % 2;

		printf("%sはどれですか？\n", sw ? eptr[nq] : jptr[nq]);

		do {
			print_cand(cand, sw);	/* 選択肢を表示 */
			scanf("%d", &no);
			if (no != na)
				puts("\a違います。");
		} while (no != na);
		puts("正解です。");

		pq = nq;

		printf("もう一度？ 0-いいえ／1-はい：");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}