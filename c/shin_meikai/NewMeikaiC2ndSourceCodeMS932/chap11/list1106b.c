// ��������R�s�[����istr_copy�̕ԋp�l��L�����p�j

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
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("�R�s�[����̂́F", tmp);
	scanf("%s", tmp);

	printf("str = \"%s\"\n", str_copy(str, tmp));	// �R�s�[������ŕ\��

	return 0;
}
