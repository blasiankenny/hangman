// ��̐����������ɕ��ׂ�

#include <stdio.h>

//--- x��y���w���I�u�W�F�N�g�̒l������ ---//
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//--- *n1��*n2�ƂȂ�悤�Ƀ\�[�g ---//
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int a, b;

	puts("��̐�������͂���B");
	printf("�����`�F");   scanf("%d", &a);
	printf("�����a�F");   scanf("%d", &b);

	sort2(&a, &b);

	puts("�����Ƀ\�[�g���܂����B");
	printf("�����`��%d�ł��B\n", a);
	printf("�����a��%d�ł��B\n", b);

	return 0;
}
