// strcmp�֐���strncmp�֐��̗��p��

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s2[128];

	puts("\"ABCDE\"�Ƃ̔�r���s���܂��B");
	puts("\"XXXXX\"�ŏI�����܂��B");

	while (1) {
		printf("\n������s2�F");
		scanf("%s", s2);

		if (strcmp(s2, "XXXXX") == 0)
			break;
		printf("strcmp( \"ABCDE\", s2)    = %d\n", strcmp( "ABCDE", s2));
		printf("strncmp(\"ABCDE\", s2, 3) = %d\n", strncmp("ABCDE", s2, 3));
	}

	return 0;
}