#include <stdio.h>


#define NUMBER 10
#define NUMBER2 10
#define NUMBER3 128

void null_string(char s[]){

    s[0]='\0';

}


int str_char(const char s[], int c){


    for(int i =0; i<c; i++){

        if(s[i] == 'c'){
            return i;
        }

    }

    return -1;

}


int str_chnum(const char s[],int c){

    int count=0;

    for(int i = 0; i < c; i++){

        if(s[i]=='c'){
            count++;
        }

    }

    return count;
}

void put_stringn(const char s[],int n){

    int i=0;

    while(i<n){

        printf("%s",s);
        i++;
    }

    printf("\n");


}

void put_stringr(const char s[]){

    int num=0;

    printf("Reversed form of s[] is: ");


    for (int i = 0; s[i]!='\0'; i++)
    {
        num++;
    }
    

    for(int i = num-1; i >= 0; i--){

        printf("%c",s[i]);

    }

putchar('\n');
}


void rev_string(char s[]){

    char temp[128];
    int num=0;

    for(int i =0; s[i]!='\0';i++){
        temp[i]=s[i];
        num++;
    }

    for(int i = num-1; i>=0;i--){

        s[i]=temp[num-1-i];

    }

}

void del_digit(char s[]){

    int i,j;
    j=0;

    for(i = 0; s[i]!='\0';i++){

        if(s[i]>='0'&&s[i]<='9'){
            j++;
        }
        else{
            s[i-j]=s[i];
        }
    }
    s[i-j]='\0';

}

void put_strary(char s[][NUMBER3]){

    int i,j,count=0;

    for(i = 0; i<NUMBER2;i++){

        printf("Enter string for s[%d]",i);
        scanf("%s",s[i]);

        for(j=0; j<NUMBER3;j++){

            if(s[i][0]=='$'&&s[i][1]=='$'&&s[i][2]=='$'&&s[i][3]=='$'&&s[i][4]=='$'){
                
                i=NUMBER2;
                j=NUMBER3;
                
            }

        }
        count++;
    }

    for(i = 0; i<count;i++){

            printf("s[%d] = %s\n",i,s[i]);
        
    }

}


void rev_strings(char s[][NUMBER3],int n){

    char temp[n][NUMBER3];
    int num[n];

    for(int i=0; i<n; i++){
        num[i]=0;
    }

    
    for(int i=0; i<n; i++){
        
        for(int j=0; s[i][j]!='\0';j++){
            temp[i][j]=s[i][j];
            num[i]++;
        }
        
        
    }


    for(int i=0; i<n; i++){

        for(int j=0; j<num[i];j++){

            s[i][j]=temp[i][num[i]-1-j];
        }

    }

}

int main(void){

    printf("sizeof(\"123\") = %u\n",(unsigned)sizeof("123"));
    printf("sizeof(\"AB\\tC\") = %u\n",(unsigned)sizeof("AB\tC"));
    printf("sizeof(\"abc\\0def\") = %u\n",(unsigned)sizeof("abc\0def"));

    char str[] = {'A','B','C','D'};

    printf("str[] = %s\n",str);

    //practice 9-1
    char str2[] = "ABC\0DEF";
    int ken = 'a';

    printf("str2 is \"%s\".\n",str2);
    printf("str2[1] is \"%c\".\n",str2[1]);
    printf("int ken is %d\n",ken);

    //List 9-4
/*
    char name[48];
    printf("What is your name?\n");
    scanf("%s",name);//don't use & before "name"
    printf("Hello %s\n",name);

    //practice 9-2
    char s[] = "ABC";
    printf("s[] before is \"%s\"\n",s);
    s[0]='\0';
    printf("s[] is now \"%s\"\n",s);
*/
    char cs[][6]={"Turbo","NA","DOHC"};
    /* 012345
     0 Turbo
     1 NA
     2 DOHC
    */
    for(int i = 0; i < 3; i++){

        printf("cs[%d] = %s\n",i,cs[i]);

    }
    printf("cs[1][1] = %c\n",cs[1][1]);

    //practice 9-3
    /*
    char s[NUMBER][128]={0};
    

    int i,n=0;

    for(i = 0; i < NUMBER; i++){
        printf("s[%d]: \n",i);
        scanf("%s",s[i]);
        n++;
    
        if(s[i][0]=='$'&&s[i][1]=='$'&&s[i][2]=='$'&&s[i][3]=='$'&&s[i][4]=='$'){
            i = NUMBER;
        }
    }

    for(i = 0; i < n; i++){

        printf("s[%d] = %s\n",i,s[i]);

    }

    */

    //practice9-4

    char s2[]={"My cat can't catch the cards"};
    printf("s2 is \"%s\"\n",s2);
    null_string(s2);
    printf("s2 is \"%s\"\n",s2);


    //practice9-5
    printf("index of c in s2 is %d\n",str_char(s2,sizeof(s2)-1));

    //practice9-6
    printf("The number of c's in s2 is %d\n",str_chnum(s2,sizeof(s2)-1));

    char s3[48];
    printf("Enter any string: ");
    scanf("%s",s3);
    put_stringn(s3,5);

    //practice9-8
    put_stringr(s3);


    //practice9-9
    rev_string(s3);
    printf("Reversed form of s3 is: %s\n",s3);

    //practice9-10

    char s4[]={"abc34d8efg1324hi7j"};
    del_digit(s4);
    printf("s4 with the digits being deleted is: %s\n",s4);

    //practice9-11

    char s5[NUMBER2][NUMBER3];

    put_strary(s5);

    //practice9-12

    char s6[][NUMBER3]={"John","Michael","Chris","Catelyn"};
    rev_strings(s6,4);
    printf("Reversed form of s6:\n");

    for(int i=0; i<4; i++){

        printf("s6[%d]: %s\n",i,s6[i]);
    }
    return 0;
}