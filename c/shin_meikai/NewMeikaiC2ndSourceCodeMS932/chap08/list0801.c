// �����̂Q��ƕ��������_���̂Q��i�֐��j

#include <stdio.h>

//--- int�^�����̂Q��l�����߂� ---//
int sqr_int(int x)
{
	return x * x;
}

//--- double�^���������_���̂Q��l�����߂� ---//
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int    n;
	double x;

	printf("��������͂���F");
	scanf("%d", &n);
	printf("���̐��̂Q���%d�ł��B\n", sqr_int(n));

	printf("��������͂���F");
	scanf("%lf", &x);
	printf("���̐��̂Q���%f�ł��B\n", sqr_double(x));

	return 0;
}
