
#include <stdio.h>

int main() {
    int x = 10;        
    int *ptr1 = &x;    
    int *ptr2 = &x;   

    *ptr1 = 20;        

    printf("Value of x via ptr2: %d\n", *ptr2); 
    
    return 0;
}
