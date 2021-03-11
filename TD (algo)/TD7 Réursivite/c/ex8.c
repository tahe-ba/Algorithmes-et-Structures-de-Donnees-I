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
    printf("\n");
}

void debag(int *t,int k);

void bag(int * t,int k){
    if (k==1) {
        t[1]=1;

    }else if (k>1){
        if (t[-1]==0){
            bag(t,k-1);
        }
        debag(t,k-2);
        t[k]=1;
        bag(t,k-2);
    }
}

void debag(int *t,int k){
    if (k==0) {
        t[1]=0;

    }else if (k>1){
        if (t[-1]==0){
            bag(t,k-1);
        }
        debag(t,k-2);
        t[k]=0;
        debag(t,k-1);
    }
}

void main (){
    int n;
    int t[100];
    printf("taille de tableau ");
    input(&n);
    remplir(t, n);
    afficher(t,n);
    bag(t,n);
    afficher(t,n);
}