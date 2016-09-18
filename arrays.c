#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    long b[] = {1200,1201,1202};
    char c[] = {'a', 'b', 'c', 'd'};
    float f[] = {2.1323, 1.23223, 3.32323};
    double d[] = {10.23423, 12.324234, 13.123213, 14.112121};
    printf("Hey Pat, I am integer array and I have %ld integers\n",sizeof(a)/sizeof(int));
    printf("Hey Pat, I am long array and I have %ld longs\n",sizeof(b)/sizeof(long));
    printf("Hey Pat, I am char array and I have %ld chars\n",sizeof(c)/sizeof(char));
    printf("Hey Pat, I am float array and I have %ld floats\n",sizeof(f)/sizeof(float));
    printf("Hey Pat, I am double and I have %ld doubles\n",sizeof(d)/sizeof(double));
}