// strncpy�֐��̗��p��i�o�O�ɂȂ��肩�˂Ȃ���j

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[5] = {'X', 'X', 'X', 'X', 'X'};
	strncpy(s1, "12345", 2);

	printf("s1 = %s\n", s1);	// s1�͕�����ł͂Ȃ��̂Ő������\���ł��Ȃ�

	return 0;
}
