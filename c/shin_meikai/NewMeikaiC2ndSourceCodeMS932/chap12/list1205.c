// �\���̂�typedef����^�������o�̒l���L�[�{�[�h����ǂݍ���

#include <stdio.h>

#define NAME_LEN	64		// ���O�̕�����

//=== �w����\���\���� ===//
typedef struct student {
	char   name[NAME_LEN];	// ���O
	int    height;			// �g��
	double weight;			// �̏d
} Student;

int main(void)
{
	Student takao;

	printf("�����F");  scanf("%s",  takao.name);
	printf("�g���F");  scanf("%d",  &takao.height);
	printf("�̏d�F");  scanf("%lf", &takao.weight);

	printf("������%s\n",   takao.name);
	printf("�g����%d\n",   takao.height);
	printf("�̏d��%.1f\n", takao.weight);

	return 0;
}
