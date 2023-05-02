#include <stdio.h>

int main(void)
{
	
    FILE *fp;
    int num_of_row;
    char name[100];
    int ch,count;
    printf("Type the file name you want the number of rows from\n");
    scanf("%s",name);
    

    if((fp=fopen(name,"r"))==NULL){
        printf("cannot open the file\n");
    }
    else{

    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n')count++;
    }

    fclose(fp);

    printf("The number of rows in the file is: %d\n",count);

    }

	return 0;
}
