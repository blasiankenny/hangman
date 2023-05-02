#include <stdio.h>


typedef struct human{

	char name[100];
	double height;
	double weight;

}Person;

void swap(Person *a, Person *b){

	Person temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void sort_by_height(Person std[],int ninzu){


	for(int i=0; i<ninzu-1;i++){
		for(int j=0; j<ninzu-1-i; j++){
			if(std[j].height>std[j+1].height){
				swap(&std[j],&std[j+1]);
			}
		}
	}


}

int main(void)
{
	FILE *fp;
	Person std[256];

	if ((fp = fopen("hw.txt", "r")) == NULL)				
		printf("\acannot open the file.\n");
	else {
		int    ninzu = 0;		
		char   name[100];	
		double height, weight;		
		double hsum = 0.0;		
		double wsum = 0.0;			

		printf("Students before sorted:\n");
		while (fscanf(fp, "%s%lf%lf", std[ninzu].name, &std[ninzu].height, &std[ninzu].weight) == 3) {
			
			printf("%-10s %5.1f %5.1f\n", std[ninzu].name, std[ninzu].height, std[ninzu].weight);

			hsum += std[ninzu].height;
			wsum += std[ninzu].weight;
			ninzu++;

		}

		sort_by_height(std,ninzu);
		printf("Students after sorted:\n");
		for(int i=0; i<ninzu; i++){
			printf("%-10s %5.1f %5.1f\n",std[i].name,std[i].height,std[i].weight);
		}

		printf("----------------------\n");
		printf("The average       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);									
	}

	return 0;
}
