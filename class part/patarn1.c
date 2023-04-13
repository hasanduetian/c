#include <stdio.h>

int main()
{
int n=9;
for(int i=0; i<5; i++){
  for(int j=0; j<=i; j++){
    printf("%d ", n);
    n--;
   }
     // n = n-2;
     printf("\n");
 }
return 0;
}
