#include <stdio.h>
void input(int* n) {
  do {
    printf(">>");
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

void getminmax(int* t, int binf, int bsup, int* min, int* max) {
  int i = 0;
  *min = binf;
  *max = binf;
  for (i = binf + 1; i <= bsup; i++) {
    if (t[*min] > t[i]) {
      *min = i;
    } else if ((t[*max] < t[i])) {
      *max = i;
    }
  }
}

void permut(int* a, int* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void triminmax(int* t, int n) {
  int i = 0, min = 0, max = 0;
  for (i = 0; i <= (n - 1) / 2; i++) {
    getminmax(t, i, n -i- 1, &min, &max);
    if (i != min) {
      permut(t + i, t + min);
      if (max != n - i - 1) {
        if (i != max) {
          permut(&t[max], &t[n - i - 1]);
        } else {
          permut(&t[min], &t[n - i - 1]);
        }
      }
    }
  }
}

void afficher(int t[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("%d\t ", t[i]);
  }
}

void main() {
  int t[100];
  int n;
  printf("taille du tableau\n");
  input(&n);
  remplir(t, n);
  triminmax(t, n);
  afficher(t, n);
  printf("\n");

}