/* �ÎZ�g���[�j���O�i�R���̐������O������j*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;				/* ���Z���鐔�l */
	int x;						/* �ǂݍ��񂾒l */
	clock_t start, end;			/* �J�n�����E�I������ */
	double req_time;			/* ���v���� */

	srand(time(NULL));			/* �����̎��ݒ� */

	a = 100 + rand() % 900;		/* 100�`999�̗����𐶐� */
	b = 100 + rand() % 900;		/* �@�@�@�@ �V �@�@�@�@ */
	c = 100 + rand() % 900;		/* �@�@�@�@ �V �@�@�@�@ */

	printf("%d + %d + %d�͉��ł����F", a, b, c);

	start = clock();			/* �v���J�n */

	while (1) {
		scanf("%d", &x);
		if (x == a + b + c)
			break;
		printf("\a�Ⴂ�܂���!!\n�ē��͂��Ă��������F");
	}

	end = clock();				/* �v���I�� */

	req_time = (double)(end - start)/CLOCKS_PER_SEC;

	printf("%.1f�b������܂����B\n", req_time);

	if (req_time > 30.0)
		printf("���Ԃ������肷���ł��B\n");
	else if (req_time > 17.0)
		printf("�܂��܂��ł��ˁB\n");
	else
		printf("�f�����ł��ˁB\n");

	return 0;
}
