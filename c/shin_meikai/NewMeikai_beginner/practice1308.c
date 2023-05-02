#include<stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("The file you're copying from:"); scanf("%s", sname);
    printf("The file you're copying to:"); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL)
        printf("\acannot open the file\n");
    else{
        if((dfp = fopen(dname, "w")) == NULL)
            printf("\acannot open the file\n");
            else{
                while((ch = fgetc(sfp)) != EOF)
                    fputc(ch, dfp);
                    fclose(dfp);
            }
            fclose(sfp);
    }
    return 0;

}