// �|�C���^�̎w��������s���Ɍ���

#include <stdio.h>

int main(void)
{
	int x = 123;
	int y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("�ύX����̂� [0�cx / 1�cy] = ");
	scanf("%d", &sw);

	int *p;
	if (sw == 0)
		p = &x;			// p��x���w��
	else
		p = &y;			// p��y���w��

	*p = 999;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}
