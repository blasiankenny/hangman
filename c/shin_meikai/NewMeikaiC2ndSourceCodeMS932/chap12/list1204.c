// �w���̑̏d���s���ł���Ύ����I�Ɍv�Z

#include <stdio.h>

#define NAME_LEN	64		// ���O�̕�����

//=== �w����\���\���� ===//
struct student {
	char   name[NAME_LEN];	// ���O
	int    height;			// �g��
	double weight;			// �̏d
};

//--- s���w���w���̑̏d��0�ȉ��ł���ΕW���̏d���� ---//
void set_stdweight(struct student *s)
{
	if ((*s).weight <= 0)
		(*s).weight = ((*s).height - 100) * 0.9;
}

int main(void)
{
	struct student takao = {"Takao", 173};

	set_stdweight(&takao);	// �W���̏d����

	printf("������%s\n",   takao.name);
	printf("�g����%d\n",   takao.height);
	printf("�̏d��%.1f\n", takao.weight);

	return 0;
}
