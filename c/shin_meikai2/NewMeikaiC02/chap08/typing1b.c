/* ��̕�����ɂ��L�[�^�C�s���O���K�i���̂Q�F�ł��������������Ă����j*/

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

//#include "getputch.h"

int main(void)
{
	int 	i;
	char	*str = "How do you do?";	/* �^�C�v���镶���� */
	int 	len = strlen(str);			/* ������str�̕����� */
	clock_t start, end;					/* �J�n�����E�I������ */

	printf("Type as shown\n");

	start = clock();					/* �J�n���� */

	for (i = 0; i < len; i++) {
		/* str[i]�ȍ~��\�����ăJ�[�\����擪�֖߂� */
		printf("%s \r", &str[i]);

		fflush(stdout);
		while (getch() != str[i])
			;
	}

	end = clock();						/* �I������ */
 
	printf("\rYou took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

	//term_getputch();

	return 0;
}