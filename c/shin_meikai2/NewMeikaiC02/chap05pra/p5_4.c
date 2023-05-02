
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAGE	10				
#define LEVEL_MIN	 3				
#define LEVEL_MAX	20				

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if ((c2 = clock()) == (clock_t)-1)	
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); 
	return 1;
}

int main(void)
{
	int i, stage;
	int level;						
	int success = 0;				
	clock_t start, end;				
	const char ltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));			

	printf("Alphabet Memorizing Training (inverted)!\n");

	do {
		printf("The level you wanna play it in (%d~%d):", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while (level < LEVEL_MIN || level > LEVEL_MAX);

	printf("Memorize the inverted version of %d Alphabet letters \n", level);

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		char mstr[LEVEL_MAX + 1];			
		char x[2];
        char *ptr;	
        

        int answer, temp;

		for (i = 0; i < level; i++)		
			mstr[i] = ltr[rand() % strlen(ltr)];
		mstr[level] = '\0';

		printf("%s", mstr);
		fflush(stdout);
		sleep(300 * level);					
        
        temp=rand()%level;

		printf("\r%*s\rEnter the %dst(th) digit of the letters: ", level, "",temp+1);
		fflush(stdout);
		scanf("%s", ptr);

        char *index=&mstr[temp];
        
    
		if (strncmp(index,ptr,1)!=0)
			printf("\aWrong.\n");
		else {
			printf("Correct!\n");
			success++;
		}
	}
	end = clock();

	printf("You got %d answers right out of %d\n", success, MAX_STAGE);
	printf("You took %.1f seconds to finish\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
