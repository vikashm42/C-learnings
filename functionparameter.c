#include <stdio.h>

// Function to apply a given function to each element of an array
void apply_function_to_array(int (*func)(int), int *int_array, int size, int *result_array) {
    for (int i = 0; i < size; i++) {
        result_array[i] = func(int_array[i]);
    }
}

// Example function that squares a number
int square_number(int x) {
    return x * x;
}

int main() {
    int input_array[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);
    int squared_array[array_size];
    
    apply_function_to_array(square_number, input_array, array_size, squared_array);

    printf("Input array: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", input_array[i]);
    }
    
    printf("\nSquared array: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", squared_array[i]);
    }
    
    return 0;
}