#include <stdio.h>
void input(int* n) {
  do {
    printf("n=");
    scanf("%d", n);
  } while (*n <= 0);
}
//t+i = &t[i]
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

int recherche(int* t, int n, int val) {
  int i;
  for (i = 0; i < n; i++) {
    if (t[i] == val) {
      return 1;
    }
  }
  return 0;
}
int sizi(int* t, int n) {
  int nb = 1, i = 0;
  for (i = 1; i < n; i++) {
    if (!recherche(t, nb, t[i])) {
      t[nb] = t[i];
      nb++;
    }
  }
  return nb;
}
void main() {
  int n = 0;
  int t[100];
  input(&n);
  remplir(t, n);
  printf("\n");
  afficher(t, n);
  printf("\n");
  n = sizi(t, n);
  printf("\n");
  afficher(t, n);
  printf("\n");
}