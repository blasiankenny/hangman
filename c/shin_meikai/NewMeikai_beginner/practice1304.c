#include <stdio.h>


typedef struct person{
    char name[100];
    double height;
    double weight;
}Person;


int main(void){

    FILE *fp;
    Person std[256];
    int num;

    fp = fopen("abc.txt","w");

    if(fp==NULL){
        printf("\acannot open the file\n");
    }
    else{

        printf("How many students?\n");
        scanf("%d",&num);
    
        for(int i=0; i<num; i++){

            printf("Enter info for person %d\n",i+1);
            scanf("%s",std[i].name);
            scanf("%lf",&std[i].height);
            scanf("%lf",&std[i].weight);
            fprintf(fp,"%s %.1f %.1
            f\n",std[i].name,std[i].height,std[i].weight);

        }
    }

    fclose(fp);
    
    

    
    return 0;
}