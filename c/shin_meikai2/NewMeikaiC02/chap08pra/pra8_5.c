#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include "getputch.h"

static void init_getputch(void) { /* �� */ }
static void term_getputch(void) { /* �� */ }

#define	NO			5			/* ���K�� */
#define	KTYPE		16			/* �u���b�N�� */

int main(void)
{

    clock_t	start, end;	
    int block,temp,line;
	char *kstr[] = {"12345",  "67890-^\\",		/* ��P�i         */
					"!\"#$%", "&'() =~|",		/* ��P�i [Shift] */
					"qwert",  "yuiop@[",		/* ��Q�i         */
					"QWERT",  "YUIOP`{",		/* ��Q�i [Shift] */
					"asdfg",  "hjkl;:]",		/* ��R�i         */
					"ASDFG",  "HJKL+*}",		/* ��R�i [Shift] */
					"zxcvb",  "nm,./\\",		/* ��S�i         */
					"ZXCVB",  "NM<> _",			/* ��S�i [Shift] */
					};

    
    printf("Starting typing practice\n");
    printf("Choose the block you want to practice typing\n");
    printf("Level 1 (1) left %-8s    (2) right %-8s\n", kstr[ 0], kstr[ 1]);
	printf("Level 2 (3) left %-8s    (4) right %-8s\n", kstr[ 4], kstr[ 5]);
	printf("Level 3 (5) left %-8s    (6) right %-8s\n", kstr[ 8], kstr[ 9]);
	printf("Level 4 (7) left %-8s    (8) right %-8s\n", kstr[12], kstr[13]);

	do {
		scanf("%d", &temp);			
	} while (temp < 1 || temp > 8);

	line = 4 * ((temp - 1) / 2) + (temp - 1) % 2;
    

    printf("Enter space key to start\n");
	while (getch() != ' ')
		;
    
    for(int i=0; i<strlen(kstr[line]);i++){
        
        for(int j=i+1;j<strlen(kstr[line]);j++){
            
              for(int k=0;k<5;k++){
                
                printf("%c",kstr[line][i]);
                printf("%c",kstr[line][j]);
		
                while(1){
                    if(getch()==kstr[line][i]){
                        break;
                    }
                }
                while(1){
                    if(getch()==kstr[line][j]){
                        break;
                    }
                }
		
            }

             for(int k=0;k<5;k++){
            printf("%c",kstr[line][j]);
            printf("%c ",kstr[line][i]);
            }         
        }

    }

    end = clock();
	printf("\rYou took %.1f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);


	return 0;
}
