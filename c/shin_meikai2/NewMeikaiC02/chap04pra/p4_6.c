#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_OF_TIMES 9

void make4digits(int x[], int y[])
{
    int i, j, val;

    for (i = 0; i < 4; i++)
    {
        do
        {
            val = rand() % 10;
            for (j = 0; j < i; j++)
                if (val == x[j])
                    break;
        } while (j < i);
        x[i] = val;
    }

    // for computer
    for (i = 0; i < 4; i++)
    {
        printf("Enter the %dst(th) digit for the computer: ",i+1);
        scanf("%d",&y[i]);
    }
}

int check(const char s[])
{
    int i, j;

    if (strlen(s) != 4)
        return 1;

    for (i = 0; i < 4; i++)
    {
        if (!isdigit(s[i]))
            return 2;
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                return 3;
    }
    return 0;
}

void judge(const char s[], const int no[], int *hit, int *blow, int *index_h, int *index_b)
{
    int i, j;

    *hit = *blow = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (s[i] == '0' + no[j])
            {
                if (i == j)
                {
                    (*hit)++;
                    if ((*index_h) == 0)
                    {
                        *index_h = i;
                    }
                }
                else
                {
                    (*blow)++;
                    *index_b = i;
                }
            }
        }
    }
}
void judge_comp(const int s[], const int no[], int *hit, int *blow, int *index_h, int *index_b)
{
    int i, j;

    *hit = *blow = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (s[i] == no[j])
            {
                if (i == j)
                {
                    (*hit)++;
                    if ((*index_h) == 0)
                    {
                        *index_h = i;
                    }
                }
                else
                {
                    (*blow)++;
                    *index_b = i;
                }
            }
        }
    }
}

void print_result(int snum, int spos)
{
    if (spos == 4)
        printf("That's correct!!");
    else if (snum == 0)
        printf("Those numbers aren't included\n");
    else
    {
        printf("%d of them is(are) included\n", snum);
        if (spos == 0)
            printf("non of their positions aren't right though\n");
        else
            printf("%d of them is(are) in the right spot(s)\n", spos);
    }
    putchar('\n');
}

void print_hint(int no[], int try_no, int hit, int blow, int index_h, int index_b)
{

    switch (try_no)
    {

    case 1:
        printf("Hint1: the first number is %d\n", no[0]);
        break;
    case 3:
        printf("Hint1: the second number is %d\n", no[1]);
        break;
    case 5:
        printf("Hint1: the third number is %d\n", no[2]);
        break;
    case 7:
        printf("Hint1: the forth number is %d\n", no[3]);
        break;
    }
}
    void comp_enter(int *buff2, int try_no, int *no2)
    {

        int i, j, k=0, val;

        if (try_no == 2||try_no==3)
        {
            buff2[0] = no2[0];
            k = 1;
        }
        else if (try_no == 4||try_no==5)
        {
            buff2[0] = no2[0];
            buff2[1] = no2[1];
            k = 2;
        }
        else if (try_no == 6||try_no==7)
        {
            buff2[0] = no2[0];
            buff2[1] = no2[1];
            buff2[2] = no2[2];
            k = 3;
        }
        else if (try_no == 8||try_no==9)
        {
            buff2[0] = no2[0];
            buff2[1] = no2[1];
            buff2[2] = no2[2];
            buff2[3] = no2[3];
            k = 4;
        }
        for (i = k; i < 4; i++)
        {
            do
            {
                val = rand() % 10;
                for (j = 0; j < i; j++)
                    if (val == buff2[j])
                        break;
            } while (j < i);
            buff2[i] = val;
        }
  
    }

    void print_hint_for_comp(int *hint, int try_no){

        switch (try_no)
        {
        case 2: printf("\a\nEnter a hint for computer\nThe first number for the computer is: ");
                scanf("%d",&hint[0]);
                break;
        case 4: printf("\a\nEnter a hint for computer\nThe second number for the computer is: ");
                scanf("%d",&hint[1]);
                break;
        case 6: printf("\a\nEnter a hint for computer\nThe third number for the computer is: ");
                scanf("%d",&hint[2]);
                break;
        case 8: printf("\a\nEnter a hint for computer\nThe forth number for the computer is: ");
                scanf("%d",&hint[3]);
                break;

        }
       
    }

    int main(void)
    {
        int k = 0;
        int try_no = 0;
        int chk;
        int hit;
        int hit2;
        int blow;
        int blow2;
        int hit_c;
        int blow_h;
        int index_h = 0;
        int index2_h = 0;
        int index_b = 0;
        int index2_b = 0;
        int no[4];
        int no2[4];
        char buff[10];
        int buff2[4];
        int hint_for_comp[4];
        clock_t start, end;
        srand(time(NULL));

        puts("# Lets's play Mastermind against the computer");
        puts("# Guess the 4 numbers in the right order");
        puts("# No dupulicate numbers are included");
        puts("# Enter numbers consequently such as 4307");
        puts("# Do not enter the same number more than once");
        printf("# You have %d tries\n\n", NUM_OF_TIMES);

        make4digits(no, no2);

        start = clock();

        do
        {
            do
            {
                printf("\a\nEnter 4 numbers\n");
                print_hint(no,try_no,hit,blow,index_h,index_b);                
                scanf("%s", buff);
                
                print_hint_for_comp(&hint_for_comp[0],try_no);
                comp_enter(&buff2[0], try_no, &no2[0]);

                chk = check(buff);

                switch (chk)
                {
                case 1:
                    puts("\aPlease enter \"4\" numbers");
                    break;
                case 2:
                    puts("\aPlease enter only numbers");
                    break;
                case 3:
                    puts("\aPlease do not enter the same number more than once");
                    break;
                }
            } while (chk != 0);

            try_no++;

            judge(buff, no, &hit, &blow, &index_h, &index_b);
            judge_comp(buff2, no2, &hit2, &blow2, &index2_h, &index2_b);
            printf("-----Printing your results-----\n\n");
            print_result(hit + blow, hit);
            puts("\n");
            printf("-----Printing results for the computer-----\n\n");
            print_result(hit2+blow2,hit2);

        } while (hit < 4 && try_no < NUM_OF_TIMES);

        if (try_no >= NUM_OF_TIMES)
        {
            printf("You lost. Computer won\n");
        }
        end = clock();
        printf("It took %d times.\nThe time you took was %.1f seconds\n",
               try_no, (double)(end - start) / CLOCKS_PER_SEC);

        return 0;
    }