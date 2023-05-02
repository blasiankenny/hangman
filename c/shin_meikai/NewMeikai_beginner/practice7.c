#include <stdio.h>



int main(void){

    typedef unsigned size_t;
    double array[10];
    printf("sizeof 1 is %u\n",sizeof(size_t));
    printf("number of elements in array is" 
    " %d",sizeof(array)/sizeof(array[0]));

    return 0;

}