/* �����^�C�s���O���K */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }
static void term_getputch(void) { /* �� */ }

#define	NO			37			/* �g���[�j���O�� */
#define	KTYPE		16			/* �u���b�N�� */
#define	POS_LEN		10			/* �|�W�V�����g���[�j���O�̕����� */

/*--- ���K���j���[ ---*/
typedef enum { Term, KeyPos, KeyPosComp, Clang, Conversation, InValid } Menu;

/*--- �e�u���b�N�̃L�[ ---*/
char *kstr[] = {
	"12345",  "67890-^\\",		/* ��P�i         */
	"!\"#$%", "&'()=~|",		/* ��P�i [Shift] */
	"qwert",  "yuiop@[",		/* ��Q�i         */
	"QWERT",  "YUIOP`{",		/* ��Q�i [Shift] */
	"asdfg",  "hjkl;:]",		/* ��R�i         */
	"ASDFG",  "HJKL+*}",		/* ��R�i [Shift] */
	"zxcvb",  "nm,./\\",		/* ��S�i         */
	"ZXCVB",  "NM<>?_",			/* ��S�i [Shift] */
};

/*--- �b����̃L�[���[�h�ƃ��C�u�����֐� ---*/
char *cstr[] = {
	"auto",		"break",	"case",		"char",		"const",	"continue",
	"default",	"do",		"double",	"else",		"enum",		"extern",
	"float",	"for",		"goto",		"if",		"int",		"long",
	"register",	"return",	"short",	"signed",	"sizeof",	"static",
	"struct",	"switch",	"typedef",	"union",	"unsigned",	"void",
	"volatile",	"while",
	"abort",	"abs",		"acos",		"asctime",	"asin",		"assert",
	"atan",		"atan2",	"atexit",	"atof",		"atoi",		"atol",
	"bsearch",	"calloc",	"ceil",		"clearerr",	"clock",	"cos",
	"cosh",		"ctime",	"difftime",	"div",		"exit",		"exp",
	"fabs",		"fclose",	"feof",		"ferror",	"fflush",	"fgetc",
	"fgetpos",	"fgets",	"floor",	"fmod",		"fopen",	"fprintf",
	"fputc",	"fputs",	"fread",	"free",		"freopen",	"frexp",
	"fscanf",	"fseek",	"fsetpos",	"ftell",	"fwrite",	"getc",
	"getchar",	"getenv",	"gets",		"gmtime",	"isalnum",	"isalpha",
	"iscntrl",	"isdigit",	"isgraph",	"islower",	"isprint",	"ispunct",
	"isspace",	"isupper",	"isxdigit",	"labs",		"ldexp",	"ldiv",
	"localeconv",			"localtime","log",		"log10",	"longjmp",
	"malloc",	"memchr",	"memcmp",	"memcpy",	"memmove",	"memset",
	"mktime",	"modf",		"perror",	"pow",		"printf",	"putc",
	"putchar",	"puts",		"qsort",	"raise",	"rand",		"realloc",
	"remove",	"rename",	"rewind",	"scanf",	"setbuf",	"setjmp",
	"setlocale","setvbuf",	"signal",	"sin",		"sinh",		"sprintf",
	"sqrt",		"srand",	"sscanf",	"strcat",	"strchr",	"strcmp",
	"strcoll",	"strcpy",	"strcspn",	"strerror",	"strftime",	"strlen",
	"strncat",	"strncmp",	"strncpy",	"strpbrk",	"strrchr",	"strspn",
	"strstr",	"strtod",	"strtok",	"strtol",	"strtoul",	"strxfrm",
	"system",	"tan",		"tanh",		"time",		"tmpfile",	"tmpnam",
	"tolower",	"toupper",	"ungetc",	"va_arg",	"va_end",	"va_start",
	"vfprintf", "vprintf",	"vsprintf"
};

/*--- �p��b ---*/
char *vstr[] = {
	"こんにちは。Hello!",							/* ����ɂ��́B*/
	"お元気ですか。How are you?",						/* �����C�ł����B */
	"はい元気です。Fine thanks.",						/* �͂����C�ł��B */
	"まあ、何とか。I can't complain, thanks.",		/* �܂��A���Ƃ��B */
	"初めまして。How do you do?",					/* ���߂܂��āB */
	"さようなら。Good bye!",						/* ���悤�Ȃ�B */
	"おはよう。Good morning!",					/* ���͂悤�B */
	"こんにちは。Good afternoon!",					/* ����ɂ��́B */
	"こんばんは。Good evening!",					/* ����΂�́B */
	"またね。See you later!",					/* ���悤�Ȃ�i�܂��ˁj�B */
	"お先にどうぞ。Go ahead, please.",				/* ����ɂǂ����B */
	"ありがとう。Thank you.",						/* ���肪�Ƃ��B */
	"いいえ結構です。No, thank you.",					/* ���������\�ł��B */
	"お名前は。May I have your name?",			/* �����O�́H */
	"お目にかかれて光栄ですI'm glad to meet you.",			/* ���ڂɂ�����Č��h�ł��B */
	"いま何時。What time is it now?",				/* �����ł����B */
	"７時くらいです。It's about seven.",				/* ��̂V�����炢�ł��B */
	"行かなきゃ。I must go now.",					/* ���������Ȃ�����B */
	"いくら。How much?",						/* ��������H */
	"トイレどこ。Where is the restroom?",			/* ����􂢂͂ǂ���ł����B */
	"失礼。Excuse me.",						/* ���炵�܂��i��l�j�B*/
	"失礼。Excuse us.",						/* ���炵�܂��i��l�ȏ�j�B*/
	"ごめん。I'm sorry.",						/* ���߂�Ȃ����B */
	"わからない。I don't know.",					/* �����A�m��Ȃ���B */
	"小銭がない。I have no change with me.",		/* ���K���Ȃ��̂ł��B */
	"戻るね。I will be back.",					/* �܂��߂��ė��܂��B */
	"外出するの。Are you going out?",				/* �o������́H */
	"邪魔じゃなければいいのですが。I hope I'm not disturbing you.",	/* ���ז�����Ȃ���΂����̂ł����B*/
	"弁解するつもりはありません。I'll offer no excuse.",			/* �ى��������͂���܂���B */
	"踊りません。Shall we dance?",					/* �x��܂��񂩁B */
	"お願いいいですか。Will you do me a favor?",			/* ������Ƃ��肢�������̂ł����B */
	"季節外れだね。It's very unseasonable.",			/* ����͋G�ߊO�ꂾ�ˁB */
	"いつでもどうぞ。You are always welcome.",			/* ���ł����}���܂���B */
	"じっとして。Hold still!",						/* �����Ƃ��āI */
	"ついてきて。Follow me.",						/* ���ė��āB */
	"僕の言う通りにやるだけ。Just follow my lead.",				/* �l�̂���Ƃ���ɂ�邾������B */
	"実を言うと。To be honest with you,",			/* �����Ɍ����Ɓc */
};

/*--- ������str���^�C�v���K�i�~�X�񐔂�Ԃ��j ---*/
int go(const char *str)
{
	int i;
	int len = strlen(str);			/* ������ */
	int mistake = 0;				/* �~�X�� */

	for (i = 0; i < len; i++) {
		/* str[i]�ȍ~��\�����ăJ�[�\����擪�֖߂� */
		printf("%s \r", &str[i]);
		fflush(stdout);
		while (getch() != str[i]) {
			mistake++;
		}
	}
	return mistake;
}

/*--- �P���|�W�V�����g���[�j���O ---*/
void pos_training(void)
{
	int i;
	int stage;
	int temp, line;
	int len;						/* ���̃u���b�N�̃L�[�� */
	int qno, pno;					/* ���ԍ��E�O��̖��ԍ� */
	int tno, mno;					/* �������E�~�X�� */
	clock_t	start, end;				/* �J�n�����E�I������ */

	printf("\nStarting simple position training\n");
	printf("Select the block you want to practice of\n");
	printf("Level 1 (1) left %-8s    (2) right %-8s\n", kstr[ 0], kstr[ 1]);
	printf("Level 2 (3) left %-8s    (4) right %-8s\n", kstr[ 4], kstr[ 5]);
	printf("Level 3 (5) left %-8s    (6) right %-8s\n", kstr[ 8], kstr[ 9]);
	printf("Level 4 (7) left %-8s    (8) right %-8s\n", kstr[12], kstr[13]);

	/* �u���b�N��I�������� */
	do {
		printf("Number (99 to quit) :");
		scanf("%d", &temp);
		if (temp == 99) return;				/* ���K���~ */
	} while (temp < 1 || temp > 8);
	line = 4 * ((temp - 1) / 2) + (temp - 1) % 2;

	printf("Practice the question of %s for %d times\n", kstr[line], NO);

	printf("Enter space key to start\n");
	while (getch() != ' ')
		;

	tno = mno = 0;						/* �������E�~�X�񐔂��N���A */
	len = strlen(kstr[line]);			/* ���K����u���b�N�̃L�[�� */

	start = clock();						/* �J�n���� */

	for (stage = 0; stage < NO; stage++) {
		char str[POS_LEN + 1];

		for (i = 0; i < POS_LEN; i++)	/* ��蕶������쐬 */
			str[i] = kstr[line][rand() % len];
		str[i] = '\0';

		mno += go(str);						/* ���K���s */
		tno += strlen(str);
	}

	end = clock();							/* �I������ */

	printf("Question: %d letters/ Wrong: %d times\n", tno, mno);
	printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}

/*--- �����|�W�V�����g���[�j���O ---*/
void pos_training2(void)
{
	int i;
	int stage;
	int temp, line;
	int sno;						/* �I�΂ꂽ�u���b�N�� */
	int select[KTYPE];				/* �I�΂ꂽ�u���b�N */
	int len[KTYPE];					/* ���̃u���b�N�̃L�[�� */
	int tno, mno;					/* �������E�~�X�� */
	clock_t	start, end;				/* �J�n�����E�I������ */
	char *format = "Level:%d (%2d) left %-8s (%2d) right %-8s "
					      "(%2d)[left] %-8s (%2d)[right] %-8s\n";

	printf("\nLet's do complicated position training\n");
	printf("Choose the block you're practicing of (can choose multiple)\n");

	for (i = 0; i < 4; i++) {
		int k = i * 4;
		printf(format, i+1, k + 1, kstr[k],		k + 2, kstr[k + 1],
							k + 3, kstr[k + 2], k + 4, kstr[k + 3]);
	}

	/* �u���b�N���d���������ɑI��������i�ő�16�j */
	sno = 0;
	while (1) {
		printf("Number: (Finish choosing:50/ Quit training:99)");

		do {
			scanf("%d", &temp);
			if (temp == 99) return;			/* ���K���~ */
		} while ((temp < 1 || temp > KTYPE) && temp != 50);

		if (temp == 50)
			break;
		for (i = 0; i < sno; i++)
			if (temp == select[i]) {
				printf("\aThat level is already chosen\n");
				break;
			}
		if (i == sno)
			select[sno++] = temp;			/* �I�΂ꂽ�u���b�N��o�^ */
	}

	if (sno == 0)							/* ����I�΂�Ȃ����� */
		return;

	printf("Practicing the question of the block below for %d times\n", NO);

	for (i = 0; i < sno; i++)
		printf("%s ", kstr[select[i] - 1]);

	printf("\nEnter space key to start\n");
	while (getch() != ' ')
		;

	tno = mno = 0;							/* �������E�~�X�񐔂��N���A */
	for (i = 0; i < sno; i++)
		len[i] = strlen(kstr[select[i] - 1]);	/* �u���b�N�̃L�[�� */

	start = clock();						/* �J�n���� */

	for (stage = 0; stage < NO; stage++) {
		char str[POS_LEN + 1];

		for (i = 0; i < POS_LEN; i++) {		/* ��蕶������쐬 */
			int q = rand() % sno;
			str[i] = kstr[select[q] - 1][rand() % len[q]];
		}
		str[i] = '\0';

		mno += go(str);						/* ���K���s */
		tno += strlen(str);
	}

	end = clock();							/* �I������ */

	printf("Question: %d letters/ Wrong: %d times\n", tno, mno);
	printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}

/*--- �b����^�p��b�g���[�j���O ---*/
void word_training(const char *mes, const char *str[], int n)
{
    int numbers[NO];
	int stage,j;
	int qno;					/* ���ԍ��E�O��̖��ԍ� */
	int tno, mno;					/* �������E�~�X�� */
	clock_t	start, end;				/* �J�n�����E�I������ */

	printf("\nLet's practice %s for %d times\n", mes, NO);

	printf("Enter space key to start\n");
	while (getch() != ' ')
		;

	tno = mno = 0;					

	start = clock();				/* �J�n���� */

	for (stage = 0; stage < NO; stage++) {
		
        qno= rand()%n;
        numbers[stage]=qno;
        for(j=0; j<stage; j++){
            if(numbers[j]==qno)
                break;
        }

        if(j!=stage){
            stage--;
            continue;
        }


		mno += go(str[qno]);		/* ����str[qno] */
		tno += strlen(str[qno]);
	}

	end = clock();					/* �I������ */

	printf("Question: %d letters/ Wrong: %d times\n", tno, mno);
	printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}

/*--- ���j���[�I�� ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\nSelect a training\n");
		printf("(1) Simple position  (2) Complicated position\n");
		printf("(3) A word in c    (4) English conversation      (0) Quit ");
		scanf("%d", &ch);
	} while (ch < Term || ch >= InValid);

	return (Menu)ch;
}

int main(void)
{
	Menu menu;										/* ���j���[ */
	int cn = sizeof(cstr) / sizeof(cstr[0]);		/* �b����̒P�ꐔ */
	int vn = sizeof(vstr) / sizeof(vstr[0]);		/* �p��b�̕����� */

	init_getputch();

	srand(time(NULL));								/* �����̎��ݒ� */

	do {
		switch (menu = SelectMenu()) {

		 case KeyPos :						/* �P���|�W�V�����g���[�j���O */
		 			pos_training();
		 			break;

		 case KeyPosComp :					/* �����|�W�V�����g���[�j���O */
		 			pos_training2();
		 			break;

		 case Clang :						/* �b����̒P�� */
		 			word_training("a word in c", cstr, cn);
		 			break;

		 case Conversation :				/* �p��b */
		 			word_training("convos in English", vstr, vn);
		 			break;
		}
	} while (menu != Term);

	term_getputch();

	return 0;
}
