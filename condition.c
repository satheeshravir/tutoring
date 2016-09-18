#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    int intSize = sizeof(a)/sizeof(int);
    if (intSize == 5){
        printf("Size of array is 5\n");
    }
    else{
        printf("Size of array is not 5\n");
    }

    switch(intSize){
        case 4: 
            printf("Size is 4\n");
        case 5:
            printf("Size is 5\n");
        
    }
    /* Modify the array and check how it behaves
}