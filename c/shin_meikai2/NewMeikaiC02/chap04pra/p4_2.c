#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_OF_TIMES 15

void make4digits(int x[])
{
	int i, j, val;

	for (i = 0; i < 4; i++) {
		do {
			val = rand() % 10;			
			for (j = 0; j < i; j++)		
				if (val == x[j])
					break;
		} while (j < i);	
		x[i] = val;
	}
}

int check(const char s[])
{
	int i, j;

	if (strlen(s) != 4)			
		return 1;

	for (i = 0; i < 4; i++) {
		if (!isdigit(s[i]))
			return 2;			
		for (j = 0; j < i; j++)
			if (s[i] == s[j])
				return 3;		
	}
	return 0;					
    }

void judge(const char s[], const int no[], int *hit, int *blow, int *index_h, int *index_b)
{
	int i, j;

	*hit = *blow = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (s[i] == '0' + no[j]){	
				if (i == j){
					(*hit)++;
                    if((*index_h)==0){	
                        *index_h=i;	
                    }
                }	
				else{
					(*blow)++;
                        *index_b=i;
                }			
            }
        }
    }
}

void print_result(int snum, int spos)
{
	if (spos == 4)
		printf("That's correct!!");
	else if (snum == 0)
		printf("Those numbers aren't included\n");
	else {
		printf("%d of them is(are) included\n", snum);

		if (spos == 0)
			printf("non of their positions aren't right though\n");
		else
			printf("%d of them is(are) in the right spot(s)\n", spos);
	}
	putchar('\n');
}

void print_hint(int no[],int try_no, int hit, int blow, int index_h, int index_b){

    switch (try_no)
    {

        case 3: printf("Hint1: the first number is %d\?\?\?\n",no[0]); break;
        case 6:if(hit>0)printf("Hint2: one of the hit numbers is %d\n",no[index_h]);break; 
        case 9:if(blow>0)printf("Hint3: the last blow number is %d\n",no[index_b]);
        case 12:printf("Hint4: the answer is%d%d%d%d\n",no[0],no[1],no[2],no[3]);break;    }
    
}

int main(void)
{
    int k=0;
	int try_no = 0;		
	int chk;			
	int hit;			
	int blow;	
    int index_h=0;
    int index_b=0;		
	int no[4];			
	char buff[10];		
	clock_t	start, end;				
	srand(time(NULL));				

	puts("# Lets's play Mastermind");
	puts("# Guess the 4 numbers in the right order");
	puts("# No dupulicate numbers are included");
	puts("# Enter numbers consequently such as 4307");
	puts("# Do not enter the same number more than once");
    printf("# You have %d tries\n\n",NUM_OF_TIMES);

	make4digits(no);					

	start = clock();					

	do {
		do {
			printf("\aEnter 4 numbers\n");
            print_hint(no,try_no,hit,blow,index_h,index_b);

			scanf("%s", buff);			

			chk = check(buff);			

			switch (chk) {
			 case 1: puts("\aPlease enter \"4\" numbers"); break;
			 case 2: puts("\aPlease enter only numbers"); break;
			 case 3: puts("\aPlease do not enter the same number more than once"); break;
			}
		} while (chk != 0);

		try_no++;
		judge(buff, no, &hit, &blow,&index_h,&index_b);	
		print_result(hit + blow, hit);	


	} while (hit < 4 && try_no<NUM_OF_TIMES); 

    if(try_no>=NUM_OF_TIMES){
        printf("Too many tries. You lost.\n");
    }
	end = clock();						
	printf("It took %d times.\nThe time you took was %.1f seconds\n",
							try_no, (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
