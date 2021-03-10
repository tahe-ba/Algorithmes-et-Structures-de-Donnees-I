#include <stdio.h>

void input(int* n) {
  do {
    printf(">> ");
    scanf("%d", n);
  } while (*n <= 0);
}

void remplir(int* t, int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("t[%d] :", i + 1);
    scanf("%d", t + i);
  }
}

void afficher(int t[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("%d\t ", t[i]);
  }
}

/*
void tri_bulle(int * t, int n) {
    int i, j, tmp;
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n - i -1; j++) {
            if (t[j] > t[j + 1]) {
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }
}
*/

void tri_bulle(int * t, int n) {
    int j,tmp,s;
    do {
        s = 0;
        for (j=0;j<n-1;j++)
            if (t[j]>t[j+1]) {
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
                s = 1;
            }
    } while (s);
}

void main() {
  int n;
  int t[100];
  printf("taille de tableau ");
  input(&n);
  remplir(t, n);
  tri_bulle(t,n);
  afficher(t,n);
}
