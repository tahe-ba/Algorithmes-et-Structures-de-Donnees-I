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

void main() {
  int n;
  int t[100];
  printf("taille de tableau ");
  input(&n);
  remplir(t, n);
  afficher(t,n);
}
