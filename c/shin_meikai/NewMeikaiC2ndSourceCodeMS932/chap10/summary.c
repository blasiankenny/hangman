// ��10�͂̂܂Ƃ�

#include <stdio.h>

#define NUMBER	5		// �l��

//--- x��y���w���I�u�W�F�N�g�̒l������ ---//
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//--- �o�u���\�[�g ---//
void bsort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int point[NUMBER];			// NUMBER�l�̊w���̓_��

	printf("%d�l�̓_������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &point[i]);
	}

	bsort(point, NUMBER);		// �\�[�g

	puts("�����Ƀ\�[�g���܂����B");
	for (int i = 0; i < NUMBER; i++)
		printf("%2d�ԁF%d\n", i + 1, point[i]);

	return 0;
}
