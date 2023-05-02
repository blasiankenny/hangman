

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define LEVEL_MIN	2				
#define LEVEL_MAX	6				

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
	signed int i;
    int stage;
	int max_stage;					
	int level;						
	int success;					
	int *score;						
	clock_t	start, end;					

	srand(time(NULL));					

	printf("Starting the Minus 1 Training!\n");
	printf("Memorize 2-digits numbers\n");
	printf("And subtract 1 from each of them\n");

	do {
		printf("which level of the game do you wanna play? (%d~%d)", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while (level < LEVEL_MIN || level > LEVEL_MAX);

	do {
		printf("The number of trainings: ");
		scanf("%d", &max_stage);
	} while (max_stage <= 0);

	score = calloc(max_stage, sizeof(int));

	success = 0;
	start = clock();
	for (stage = 0; stage < max_stage; stage++) {
		int no[LEVEL_MAX];					
		int x[LEVEL_MAX];					
		int seikai = 0;						

		printf("\nStarting the %dst(th) stage !!\n", stage + 1);

		for (i = 0; i < level; i++) {		
			no[i] = rand() % 90 + 10;		
			printf("%d ", no[i]);			
		}
		fflush(stdout);
		sleep(300 * level);					
		printf("\r%*s\r", 3 * level, "");	
		fflush(stdout);

		for (i = 0; i < level; i++) {		
			printf("%dst(th) number:", i + 1);
			scanf("%d", &x[i]);

            if(x[i]==-1&&i!=0){
                printf("%dst(th) number:",i);
			    scanf("%d", &x[i-1]);
                i--;
            }

		}

		for (i = 0; i < level; i++) {		
			if (x[i] != no[i] -1)
				printf("Wrong ");
			else {
				printf("Correct ");
				seikai++;
			}
		}
		putchar('\n');

		for (i = 0; i < level; i++)			
			printf("%2d ", no[i]);

		printf("You got %d answers right!\n", seikai);
		score[stage] = seikai;				
		success += seikai;					
	}
	end = clock();

	printf("You got %d right answers out of %d\n", success, level * max_stage);

	for (stage = 0; stage < max_stage; stage++)
		printf("%2dst(th) stage: %d\n", stage + 1, score[stage]);

	printf("You took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	free(score);

	return 0;
}
