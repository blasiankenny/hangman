// �z��̗v�f�̃A�h���X�i�v�f�ւ̃|�C���^�j��\���i���̂Q�j

#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p = &a[2];				// p��a[2]���w��

	for (int i = -2; i < 3; i++)
		printf("&a[%d] = %p   p %c %d = %p\n",
				i, &a[i], i < 0 ? '-' : '+',
				i < 0 ? -i : i, p + i);

	return 0;
}
