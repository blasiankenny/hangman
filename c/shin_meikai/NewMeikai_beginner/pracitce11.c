#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *str_copy(char *d, const char *s){

    char *t=d;
    while(*d++=*s++);

    return t;

}


void put_string(const char s[]){

    while(*s){
        printf("%c",*s);
        *s++;
    }
    
    printf("\n");

}


int str_chnum(const char *s, int c){

    int count=0;
    while(*s){

        if(*s==c)count++;
        *s++;
    }

    return count;
}

char *str_chr(char *s, int c){

    while(*s){

        if(*s==c){
            return s;
        }
        *s++;
    }

    return NULL;

}

void str_toupper(char s[]){

    while(*s){

        *s=toupper(*s);
        *s++;

    }

}    
void str_tolower(char s[]){

    while(*s){

        *s=tolower(*s);
        *s++;

    }

}


void del_digit(char *str){

    int i,d;

   for(i = 0; str[i]; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            for(d = 0; str[d]; ++d)
                str[d] = str[d + 1];
                --i;
        }
    }
    return;

}

int main(void){

/*
    char *p ="123";
    printf("p = \"%s\"\n",p);
    p = "456"+1;
    printf("p = \"%s\"\n",p);
*/  
    int i;
    char a[][5] = {"LISP","C","Ada" };
    char *p[] = {"PAUL","X","MAC"};

    /*配列全体のサイズ(配列の要素のサイズ×配列の要素数)sizeof(a)を
    配列の要素のサイズsizeof(a[0])で割ると配列の要素数が求められる*/
   
    printf("sizeof(a) = %d, sizeof(*a) = %d\n", sizeof(a), sizeof(*a));
    printf("sizeof(p) = %d, sizeof(*p) = %d\n", sizeof(p), sizeof(*p));
    
    for(i = 0; i < (sizeof(a) / sizeof(*a)); i++)
    /* sizeof(a)は要素全体のビット数　すなわち　3×5=15
       sizeof(*a) = a[0]の為　5　となり　15÷5= 3*/
        printf("a[%d] = \"%s\"\n",i ,a[i]);
    for(i = 0; i < (sizeof(p) / sizeof(*p)); i++)
        printf("a[%d] = \"%s\"\n",i ,p[i]);
    
    //practice11-3

    char str[128]="ABC";
    char tmp[128];

    printf("str = \"%s\"\n",str);

    printf("We're copying: ");
    scanf("%s",tmp);

    printf("After copying: str = \"%s\"\n",str_copy(str,tmp));


    //practice11-4

    char s[128];
    printf("Enter string:");
    scanf("%s",s);
    put_string(s);


    //practice11-5
    int c='c';
    printf("Number of c's in %s is %d\n",s,str_chnum(s,c));


    //practice11-6
    printf("the word starting with a c in the string is: %s\n",str_chr(s,c));


    //practice11-7
    str_toupper(s);
    printf("Upper case: %s\n",s);
    str_tolower(s);
    printf("Lower case: %s\n",s);


    //practice11-8
    del_digit(s);
    printf("s after deleting its digits is: %s\n",s);
    return 0;
}