/* ���I�Ɋm�ۂ��������ɒl�������ĕ\�� */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;

	x = calloc(1, sizeof(int));		/* �m�� */

	if (x == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);					/* ��� */
	}

	return 0;
}
