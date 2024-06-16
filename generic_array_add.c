
#include <stdio.h>

double arrayAdd(double *array, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    double array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = 5;

    double result = arrayAdd(array, size); 

    printf("Sum of array elements: %.2f\n", result);
    
    return 0;
}
