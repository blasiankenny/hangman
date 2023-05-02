/* �v���O�������E�v���O�����������̕\���i���̂Q�F������P�ʂő����j*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;

	while (argc-- > 0)
		printf("argv[%d] = \"%s\"\n", i++, *argv++);

	return 0;
}
