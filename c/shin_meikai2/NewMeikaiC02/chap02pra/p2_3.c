#include <time.h>
#include <stdio.h>

int sleep(unsigned long);

void gput(const char *s, int speed){

    for(int i=0; *(s+i)!='\0';i++){

        printf("%c",*(s+i));
        sleep(speed);
    }

}

void bput(const char *s, int d, int e, int n){

    for(int i=0; i<n; i++){

       
        printf("%s", s);
        sleep(d);
        printf("\r                      \r"); 
        sleep(e);
    }
}

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if ((c2 = clock()) == (clock_t)-1)	/* �G���[ */
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); 
	return 1;
}

int main(void)
{
    bput("what's up",500,1000,5);
	return 0;
}
