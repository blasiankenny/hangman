// �|�C���^�i�A�h���X���Z�q&�ƊԐډ��Z�q*�j

#include <stdio.h>

int main(void)
{
	int n = 57;
	printf("n  = %d\n", n);
	printf("&n = %p\n", &n);

	int *p = &n;
	printf("p  = %p\n", p);
	printf("*p = %d\n", *p);

	return 0;
}
