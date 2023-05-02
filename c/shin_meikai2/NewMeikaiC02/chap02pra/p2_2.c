#include <time.h>
#include <stdio.h>


void gput(const char *s, int speed){

    for(int i=0; *(s+i)!='\0';i++){

        printf("%c",*(s+i));
        sleep(speed);
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
    gput("Hey what's up\0",500);
	return 0;
}
