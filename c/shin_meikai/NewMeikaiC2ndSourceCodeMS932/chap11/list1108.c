// strlen�֐��̗��p��

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];

	printf("������F");
	scanf("%s", str);

	printf("������\"%s\"�̒�����%zu�ł��B\n", str, strlen(str));

	return 0;
}
