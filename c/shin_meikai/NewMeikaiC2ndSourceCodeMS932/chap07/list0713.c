// 0.0����1.0�܂�0.01�P�ʂŌJ��Ԃ��i�����Ő���j

#include <stdio.h>

int main(void)
{
	float x;

	for (int i = 0; i <= 100; i++) {
		x = i / 100.0;
		printf("x = %f\n", x);
	}

	return 0;
}
