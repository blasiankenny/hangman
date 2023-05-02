#include <time.h>
#include <stdio.h>
#include <string.h>

int sleep(unsigned long);
void telop(const char *s, int direction, int speed, int n);

void telop(const char *s, int direction, int speed, int n)
{

    int len = strlen(s);
    int cnt = 0;

    if (direction == 0)
    {
        
        for (int i = 0; i < n; i++)
        {
            putchar('\r');
            for (int j = 0; j < len; j++)
            {
                printf("%c", s[(cnt + j) % len]);
            }
                cnt++;
            
            sleep(speed);
        }
    }
    else
    {
        cnt=len;
        for (int i = n; i > 0; i--)
        {
            putchar('\r');
            for (int j = 0; j < len; j++)
            {
                printf("%c", s[(cnt+j)%len]);
            }
            if(cnt==0){
                cnt=len;
            }
            else{
                cnt--;
            }
            sleep(speed);
        }
    }
}

int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;

    do
    {
        if ((c2 = clock()) == (clock_t)-1) /* �G���[ */
            return 0;
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void)
{
    int direction,speed,num;
    printf("(0)...Left (1)...Right");
    scanf("%d",&direction);
    printf("Speed: ");
    scanf("%d",&speed);
    printf("The amount of times: ");
    scanf("%d",&num);
    telop("I'm sick",direction,speed,num);
    return 0;
}
