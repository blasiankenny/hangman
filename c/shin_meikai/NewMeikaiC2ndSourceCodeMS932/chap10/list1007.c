// ��̐����l����������

#include <stdio.h>

//--- �Q�l�̌����ix��y���w���I�u�W�F�N�g�̒l�̌����j---//
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;

	puts("��̐�������͂���B");
	printf("�����`�F");   scanf("%d", &a);
	printf("�����a�F");   scanf("%d", &b);

	swap(&a, &b);

	puts("�����̒l���������܂����B");
	printf("�����`��%d�ł��B\n", a);
	printf("�����a��%d�ł��B\n", b);

	return 0;
}
