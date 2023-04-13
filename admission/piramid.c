#include <stdio.h>

int main(void) {
    int n,k;
    scanf( "%d",&n);
    for (int i =1; i<=n; i++) {
     for (int j=i; j<n; j++) {
           printf(" ");
        }
        for (k=1;k<=(i*2)-1;k++){
            printf("*");
        }
    printf("\n");
  }

  return 0;
}

