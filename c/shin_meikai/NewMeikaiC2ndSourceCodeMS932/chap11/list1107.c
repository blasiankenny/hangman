// �������A���R�s�[����

#include <stdio.h>

//--- ������s��d�ɃR�s�[���� ---//
char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char tmp[128];
	char s1[128], s2[128];

	printf("������F", tmp);
	scanf("%s", tmp);

	str_copy(s1, str_copy(s2, tmp));

	printf("s1 = \"%s\"\n", s1);
	printf("s2 = \"%s\"\n", s2);

	return 0;
}
