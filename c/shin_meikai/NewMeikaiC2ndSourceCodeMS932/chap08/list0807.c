// �K����ċA�I�ɋ��߂�

#include <stdio.h>

//--- �����ln�̊K��l��ԋp ---//
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;

	printf("��������͂���F");
	scanf("%d", &num);

	printf("%d�̊K���%d�ł��B\n", num, factorial(num));

	return 0;
}
