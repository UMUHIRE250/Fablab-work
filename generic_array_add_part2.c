// generic_array_add_part2.c
#include <stdio.h>
#include <stdbool.h>

// Function to sum values in an array of doubles and return the result via a parameter
bool arrayAdd(double *array, int size, double *result) {
    if (array == NULL || result == NULL) {
        return false; // Return false if array or result is NULL
    }

    *result = 0.0;
    for (int i = 0; i < size; i++) {
        *result += array[i];
    }
    return true; // Return true if operation is successful
}

int main() {
    double array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = 5;
    double result;

    if (arrayAdd(array, size, &result)) {
        printf("Sum of array elements: %.2f\n", result);
    } else {
        printf("Error: NULL pointer passed to arrayAdd function.\n");
    }
    
    return 0;
}
