/*
// when user input in odd number
//  in down write constant variable program

#include <stdio.h>

int main() {
    int arr[10][10] ;
    int i, j, temp,n;
     scanf("%d ", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d ", &arr[i][j]);

        }
         //printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("\n");
    
    for (i = 0; i < n; i++) {
        if (i == n/2) {
            continue;     // here skip scond element
        }
        for (j = 0; j < n/2; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


//when constant variable set
#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, temp;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        // Skip the second row
        if (i == 1) {
            continue;
        }
        for (j = 0; j < 3/2; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[i][3 - 1 - j];
            arr[i][3 - 1 - j] = temp;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

