// �w����\���\���́i�����o�ɒl�����^�R�s�[�j

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		// ���O�̕�����

//=== �w����\���\���� ===//
struct student {
	char   name[NAME_LEN];	// ���O
	int    height;			// �g��
	double weight;			// �̏d
};

int main(void)
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");	// ���O
	sanaka.height = 175;			// �g��
	sanaka.weight = 62.5;			// �̏d

	printf("������%s\n",   sanaka.name);
	printf("�g����%d\n",   sanaka.height);
	printf("�̏d��%.1f\n", sanaka.weight);

	return 0;
}
