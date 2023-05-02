#include <stdio.h>

int main(void){

    //practice13-1
    FILE *fp;
    char name[20];
    printf("Enter a file name: ");
    scanf("%s",&name);
    fp=fopen(name,"r");

    if(fp==NULL){
        printf("The file doesn't exist\n");
    }
    else{
        printf("The file exists");
    }

    fclose(fp);
    

    //practice13-2
    char name2[20];
    printf("Enter a file name: ");
    scanf("%s",&name);
    fp=fopen(name,"w");

    printf("Deleting the content of the file.\n");

    fclose(fp);

    return 0;
}