// �W�����͂���̓��͂��t�@�C���ɏ�������

#include <stdio.h>

int main(void)
{
	FILE *fp;					// �R�s�[��
	char fname[FILENAME_MAX];	// �R�s�[��t�@�C����

	printf("�R�s�[��t�@�C�����F");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)	// �R�s�[����I�[�v��
		printf("\a�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
	else {
		int ch;
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);							// �R�s�[����N���[�Y
	}

	return 0;
}
