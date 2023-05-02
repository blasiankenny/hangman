#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";		


void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				
		printf("It's your first time using this program.\n");
	else {
		int year, month, day, h, m, s;
        char mess[100];
		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, mess);
		printf("Last time was: %d/%d/%d %d:%d:%d and your feeling was: %s\n",
										year, month, day, h, m, s,mess);
		fclose(fp);									
	}
}

void put_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "w")) == NULL)				
		printf("\acannot open the file.\n");
	else {
		time_t current = time(NULL);			  
		struct tm *timer = localtime(&current);	
        char mess[100];
        printf("What's your feeling like right now? ");
        scanf("%s",mess);
		fprintf(fp, "%d %d %d %d %d %d %s\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,		   timer->tm_min,	  timer->tm_sec, mess);
		fclose(fp);									
	}
}

int main(void)
{
	get_data();			

	put_data();		

	return 0;
}
