// ��������R�s�[���ĕ\��

#include <stdio.h>
#include <string.h>

int main(void)
{
	char st[128];
	char s1[128], s2[128];

	printf("������F", st);
	scanf("%s", st);

	printf("s2 = \"%s\"\n", strcpy(s2, st));	// st��s2�ɃR�s�[���ĕ\��
	printf("s1 = \"%s\"\n", strcpy(s1, s2));	// s2��s1�ɃR�s�[���ĕ\��

	return 0;
}
