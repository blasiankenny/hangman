// �w����\���\���́i�����o���������j

#include <stdio.h>

#define NAME_LEN	64		// ���O�̕�����

//=== �w����\���\���� ===//
struct student {
	char   name[NAME_LEN];	// ���O
	int    height;			// �g��
	double weight;			// �̏d
};

int main(void)
{
	struct student takao = {"Takao", 173};

	printf("������%s\n",   takao.name);
	printf("�g����%d\n",   takao.height);
	printf("�̏d��%.1f\n", takao.weight);

	return 0;
}
