// �Q�_�Ԃ̋��������߂�

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))		// �Q��l�����߂�

//=== �_�̍��W��\���\���� ===//
typedef struct  {
	double x;	// �w���W
	double y;	// �x���W
} Point;

//--- �_p1�Ɠ_p2�̋�����Ԃ�---//
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

int main(void)
{
	Point crnt, dest;

	printf("���ݒn�̂w���W�F");   scanf("%lf", &crnt.x);
	printf("�@�@�@�@�x���W�F");   scanf("%lf", &crnt.y);
	printf("�ړI�n�̂w���W�F");   scanf("%lf", &dest.x);
	printf("�@�@�@�@�x���W�F");   scanf("%lf", &dest.y);

	printf("�ړI�n�܂ł̋�����%.2f�ł��B\n", distance_of(crnt, dest));

	return 0;
}
