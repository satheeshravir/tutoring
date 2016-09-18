#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    long b[] = {1200,1201,1202};
    char c[] = {'a', 'b', 'c', 'd'};
    float f[] = {2.1323, 1.23223, 3.32323};
    double d[] = {10.23423, 12.324234, 13.123213, 14.112121};
    int intSize = sizeof(a)/sizeof(int);
    for(int i=0;i<intSize;i++){
        printf("%d", a[i]);
    }
    printf("\n");
    int i=0;
    while(i<intSize){
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
    i=0;
    do{
        printf("%d", a[i]);
        i++;
    }while(i<intSize);
    printf("\n");
    /* Use for, while and do while to loop through double array */
    
}