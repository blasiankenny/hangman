// �W�����͂���̓��͂�W���o�͂ɃR�s�[����

#include <stdio.h>

int main(void)
{
	int ch;

	while (1) {				// �������[�v
		ch = getchar();		// �ǂݍ��񂾕�����ch�ɑ��
		if (ch == EOF)		// �G���[������������
			break;			// while���������I�ɔ����o��
		putchar(ch);		// ����ch��\��
	}

	return 0;
}
