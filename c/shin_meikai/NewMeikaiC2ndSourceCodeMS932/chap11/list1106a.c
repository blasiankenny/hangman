// ��������R�s�[����i�ʉ��j

#include <stdio.h>

//--- ������s��d�ɃR�s�[���� ---//
char *str_copy(char *d, const char *s)
{
	char *t = d;
	int i = 0;

	while (d[i] = s[i])
		i++;

	return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("�R�s�[����̂́F", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	printf("str = \"%s\"\n", str);

	return 0;
}
