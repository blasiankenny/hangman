/* ������̔z��𓮓I�Ɋm�ہi�Q�����z��j*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	num;			/* ������̌� */
	char (*p)[15];		/* �������͒萔15 */

	printf("How many strings?:");
	scanf("%d", &num);

	p = (char (*)[15])malloc(num * 15);

	if (p == NULL) 
		puts("Failed to store memory locations");
	else {
		int i;

		for (i = 0; i < num; i++) {			/* �������ǂݍ��� */
			printf("p[%d] : ", i);
			scanf("%s", p[i]);
		}

		for (i = 0; i < num; i++)			/* �������\�� */
			printf("p[%d] = %s\n", i, p[i]);

		free(p);							/* �L�������� */
	}

	return 0;
}
