// pointer_arithmetic_on_array.c
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50}; // Step 1: Declare an array of 5 integers
    int *ptr = &array[4];                // Step 2: Declare a pointer pointing to the last element of the array

    // Step 3: Traverse the array via the pointer in reverse direction
    while (ptr >= array) {
        printf("%d\n", *ptr);
        ptr--; // Move the pointer to the previous element
    }
    
    return 0;
}
