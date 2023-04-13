#include <stdio.h>

#define SIZE 3

void swap_diagonals(int arr[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        int temp = arr[i][i];
        arr[i][i] = arr[i][SIZE-1-i];
        arr[i][SIZE-1-i] = temp;
    }
}

void print_array(int arr[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    printf("Before swapping:\n");
    print_array(arr);

    swap_diagonals(arr);

    printf("After swapping:\n");
    print_array(arr);

    return 0;
}
