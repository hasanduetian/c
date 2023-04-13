#include <stdio.h>

int main(void) {
  int n = 1, factorial = 1;

  // print a table of the first 10 factorials
  printf("n\tn!\n");  // header row
  printf("---\t---\n");  // separator row

  // compute and print each factorial in a row
  compute_factorial:
  printf("%d\t%d\n", n, factorial);
  n++;
  factorial *= n;
  if (n <= 10) {
    goto compute_factorial;
  }

  return 0;
}

