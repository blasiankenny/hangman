// ��W�͂̂܂Ƃ߁i���̂P�j

#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void)
{
	int color;

	printf("0�`2�̒l�F");  scanf("%d", &color);

	printf("���Ȃ���");  
	switch (color) {
	 case Red   : printf("��");  break;
	 case Green : printf("��");  break;
	 case Blue  : printf("��");  break;
	}
	printf("��I�т܂����B\n");

	return 0;
}
