// ������̔z��

#include <stdio.h>

int main(void)
{
	char a[][5] = {"LISP", "C", "Ada"};	  // �z��ɂ�镶����̔z��
	char *p[]   = {"PAUL", "X", "MAC"};	  // �|�C���^�ɂ�镶����̔z��

	for (int i = 0; i < 3; i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (int i = 0; i < 3; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
