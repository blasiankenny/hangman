// �T�l�̊w����g���̏����Ƀ\�[�g

#include <stdio.h>
#include <string.h>

#define NUMBER		5		// �w���̐l��
#define NAME_LEN	64		// ���O�̕�����

//=== �w����\���\���� ===//
typedef struct {
	char   name[NAME_LEN];	// ���O
	int    height;			// �g��
	double weight;			// �̏d
} Student;

//--- x�����y���w���w�������� ---//
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//--- �w���̔z��a�̐擪n�̗v�f��g���̏����Ƀ\�[�g ---//
void sort_by_height(Student a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	Student std[] = {
		{"Sato",   178, 61.2},		// �����N
		{"Sanaka", 175, 62.5},		// �����N
		{"Takao",  173, 86.2},		// �����N
		{"Mike",   165, 72.3},		// Mike�N
		{"Masaki", 179, 77.5},		// �^��N
	};

	for (int i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

	sort_by_height(std, NUMBER);	// �g���̏����Ƀ\�[�g

	puts("\n�g�����Ƀ\�[�g���܂����B");
	for (int i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

	return 0;
}
