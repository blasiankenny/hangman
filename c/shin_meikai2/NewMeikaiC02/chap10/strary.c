/* ������𓮓I�Ɋm�� */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char st[16];
	char *pt;

	printf("Enter a string st");
	scanf("%s", st);

	pt = malloc(strlen(st) + 1);	/* �L����𓮓I�Ɋm�� */

	if (pt) {
		strcpy(pt, st);				/* ��������R�s�[ */
		printf("Created a duplicate of pt\n");
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);					/* �L�������� */
	}

	return 0;
}
