#include <stdio.h>
int puiss(int n, int k) {
    if (k == 0)
        return 1;

    else
        return (n * puiss(n, k - 1));
}


void input(int* n) {
  do {
    printf(">> ");
    scanf("%d", n);
  } while (*n <= 0);
}


void main () {
int a,b;
input (&a);
input (&b);
printf("%d a la puissance %d = %d\n",a,b,puiss(a,b));

}