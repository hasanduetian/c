#include <stdio.h>

#define ROWS 2
#define COLS 3

void swap(int arr1[ROWS][COLS], int arr2[ROWS][COLS]) {
    int temp;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            temp = arr1[i][j];
            arr1[i][j] = arr2[i][j];
            arr2[i][j] = temp;
        }
    }
}

int main() {
    int arr1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[ROWS][COLS] = {{7, 8, 9}, {10, 11, 12}};

    printf("Before swapping:\n");
    printf("arr1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("arr2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    swap(arr1, arr2);

    printf("After swapping:\n");
    printf("arr1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("arr2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
