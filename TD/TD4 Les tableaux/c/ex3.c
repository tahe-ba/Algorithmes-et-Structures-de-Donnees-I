#include <stdio.h>
void input(int* n) {    
  do {
    printf(">");
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
void decalage(int* t, int n) {
  int i = 0;
  for (i = n - 1; i > 0; i--) {
    t[i] = t[i - 1];
  }
}
void rotation(int* t, int n, int pas) {
  int i = 0,x=0;
  for (i = 0; i < pas; i ++) {
    x = t[n - 1];
    decalage(t, n);
    t[0] = x;
  }
}
void main() {
  int n,p;
  int t[100];
  printf("donner taille du tableau \n");
  input(&n);
  printf("donner le pas de rotation \n");

  input(&p);
  remplir(t, n);
  afficher(t, n);
  printf("\n");
  rotation(t,n,p);
  printf("\n");
  afficher(t, n);
  printf("\n");
}