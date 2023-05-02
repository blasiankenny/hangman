#include <stdio.h>
#include <string.h>
#define NUMBER 3
#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;

struct xyz{
    int numi;
    long numl;
    double numd;
};

struct xyz scan_xyz(){

    struct xyz temp={0,0,0};
    
    printf("value for int: ");
    scanf("%d",&temp.numi);
    printf("value for long: ");
    scanf("%ld",&temp.numl);
    printf("value for double: ");
    scanf("%f",&temp.numd);

    return temp;
} 


void std_info(Student *std){

    for(int i=0; i<NUMBER; i++){

        printf("name for %d\n",i+1);
        scanf("%s",std[i].name);
        printf("height for %d\n",i+1);
        scanf("%d",&std[i].height);
        printf("weight for %d\n",i+1);
        scanf("%f",&std[i].weight);
        printf("scholarship for %d\n",i+1);
        scanf("%ld",&std[i].schols);

    }   

}

void swap_Student(Student *x,Student*y){

    Student temp=*x;
    *x=*y;
    *y=temp;

}


void sort_by_height(Student *a,int n){

    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1-i; j++){

            if(a[j].height>a[j+1].height){
                swap_Student(&a[j],&a[j+1]);
            }
        }
    }
}

void sort_by_name(Student *a,int n){


    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(strcmp(a[i].name,a[i+1].name)>0){
                swap_Student(&a[i],&a[i+1]);
            }
        }
    }

    int i, j;

    for(i = 0; i < n; i++){
        for(j = n - 1; j > i; j--){
            if(strcmp(a[j - 1].name, a[j].name) > 0){
                swap_Student(&a[j - 1], &a[j]);
                }
        }
    }

}

int main(void){

/*
    //practice12-1
    struct student michael = {"Michael",177,70,90000};
    printf("Name = %s\n",michael.name);
    printf("height = %d\n",michael.height);
    printf("weight = %.1f\n",michael.weight);
    printf("schols = %ld\n",michael.schols);

    printf("@Name = %p\n",&michael.name
    );
    printf("@height = %p\n",&michael.height);
    printf("@weight = %p\n",&michael.weight);
    printf("@schols = %p\n",&michael.schols);


    //practice12-2
    struct student kate = {"",0,0,0};       
    printf("What's your name? ");
    scanf("%s",kate.name);
    printf("How tall are you? ");
    scanf("%d",&kate.height);
    printf("How much do you weigh? ");
    scanf("%f",&kate.weight);
    printf("How much is your scholarship? ");
    scanf("%ld",&kate.schols);

    printf("Name = %s\n",kate.name);
    printf("height = %d\n",kate.height);
    printf("weight = %.1f\n",kate.weight);
    printf("schols = %ld\n",kate.schols);

    //practice12-3
    struct xyz new = {0,0,0};
    new = scan_xyz();
    printf("int = %d\n",new.numi);
    printf("long = %ld\n",new.numl);
    printf("double = %f\n",new.numd);
*/

    //practice12-4

    Student std[NUMBER];
    Student *ptr = std;
    std_info(ptr);
    
    puts("\n\n");
    printf("Before sorted:\n");
    for (int i = 0; i < NUMBER; i++)
    {
        printf("Student info for no.%d:\n",i+1);
        printf("name = %s\n",std[i].name);
        printf("height = %d\n",std[i].height);
        printf("weight = %f\n",std[i].weight);
        printf("scholarship = %ld\n",std[i].schols);

    }

    puts("\n\n");
    //sort by height
    sort_by_height(std,NUMBER);
    printf("After sorted by height in ascending order:\n");
    for (int i = 0; i < NUMBER; i++)
    {
        printf("Student info for no.%d:\n",i+1);
        printf("name = %s\n",std[i].name);
        printf("height = %d\n",std[i].height);
        printf("weight = %f\n",std[i].weight);
        printf("scholarship = %ld\n",std[i].schols);

    }
    
    puts("\n\n");
    sort_by_name(std,NUMBER);

    printf("After sorted by name in ascending order:\n");
    for (int i = 0; i < NUMBER; i++)
    {
        printf("Student info for no.%d:\n",i+1);
        printf("name = %s\n",std[i].name);
        printf("height = %d\n",std[i].height);
        printf("weight = %f\n",std[i].weight);
        printf("scholarship = %ld\n",std[i].schols);

    }



    return 0;
}