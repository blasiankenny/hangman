/* �J�E���g�_�E����Ƀv���O�������s���Ԃ�\�� */

#include <time.h>
#include <stdio.h>

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
	int 	i;
	clock_t	c;

	for (i = 10; i > 0; i--) {		/* �J�E���g�_�E�� */
		c = clock();
		printf("\r\r\r%2d %4d", i,c);
		
		fflush(stdout);
		sleep(1000);				/* �P�b�x�~ */
	}
	printf("\r\aFIRE!!\n");

	c = clock();
	printf("%.1f seconds with %d clocks have passed since the program started\n",
												(double)c / CLOCKS_PER_SEC,c);
	return 0;
}
