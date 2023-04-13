#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int arr[ROWS][COLS]) {   
    int temp;
    for (int i = 0; i < ROWS; i++) {
        for (int j = i+1; j < COLS; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Before transposition:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr);

    printf("After transposition:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
