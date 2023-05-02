/* �P���L���g���[�j���O�i�S���̐��l���L���j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STAGE	5							/* �X�e�[�W�� */
#define NUM_OF_DIGITS 4
/*--- x�~���b�o�߂���̂�҂� ---*/
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if ((c2 = clock()) == (clock_t)-1)	/* �G���[ */
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); 
	return 1;
}

int main(void)
{
	
    int stage, success;
    clock_t start,end;

    srand(time(NULL));

    puts("Let's start a memorizing game!");
    puts("Memorize a 4-digit number and type what you saw.");

    stage=0;
    success=0;

    start = clock();

    while(stage<MAX_STAGE){

        int number,temp, i, inp, inverted=0;

        number=1000 + rand()%9000;
        
        printf("%d",number);
        
        sleep(300*NUM_OF_DIGITS);

        printf("\r%*s\rEnter: ",NUM_OF_DIGITS+1,"");
        scanf("%d",&inp);
        
        temp = number;

        for(i=NUM_OF_DIGITS; i>0; i--){
            inverted += (temp%10)*(pow(10,i-1));
            temp = temp/10;
        }

        if(inp==inverted){
            printf("Correct!\n");
            success++;
        }
        else{
            printf("Wrong.\n");
        }
        stage++;
    }

    end = clock();

    printf("You got %d out of %d answers right!\n",success,MAX_STAGE);
    printf("You took %.1f seconds to finish the game.\n",(double)(end-start)/CLOCKS_PER_SEC);


	return 0;
}
