// �K����ċA�I�ɋ��߂�i�������Z�q�j

#include <stdio.h>

//--- �����ln�̊K��l��ԋp�i�������Z�q�j ---//
int factorial(int n)
{
	return n > 0 ? n * factorial(n - 1) : 1;
}

int main(void)
{
	int num;

	printf("��������͂���F");
	scanf("%d", &num);

	printf("%d�̊K���%d�ł��B\n", num, factorial(num));

	return 0;
}
