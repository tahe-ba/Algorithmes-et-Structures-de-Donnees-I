#include <stdio.h>
void input(int* n) {
  do {
    printf(">> ");
    scanf("%d", n);
  } while (*n <= 0);
}
//t+i = &t[i]
void remplir(int* t, int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("t[%d] :", i);
    scanf("%d", t + i);
  }
}

void afficher(int t[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d\t ", t[i]);
  }
}

void ss(int* t,int n, int* seq,int* ind_s_seq,int* ind_f_seq){
    int i,size_seq=1,size_pgs=0;
    *seq=1;
    for (i=0;i<(n-1);i++){
            if (t[i]<=t[i+1]){
                size_seq++;
            } else {
                *seq=*seq +1 ;
                if (size_pgs<size_seq){
                    *ind_s_seq=i-size_seq+1;
                    size_pgs=size_seq;
                }
                size_seq=1;
            }
  }

  if (size_pgs<size_seq){
    *ind_s_seq=i-size_seq+1;
     size_pgs=size_seq;
  }
  *ind_f_seq = *ind_s_seq + size_pgs-1;

}

void afficher_ss(int t[], int s,int e) {
  int i;
  printf("<");
  for (i = s; i < e; i++) {
    printf("%d,", t[i]);
  }
    printf("%d",t[e]);
    printf(">");
}

void main() {
  int n,seq_crois=0,ind_start=0,ind_end=0;
  int t[100];
  printf("taille de tableau ");
  input(&n);
  remplir(t, n);
  afficher(t,n);
  printf("\n");
  ss(t,n,&seq_crois,&ind_start,&ind_end);
  printf("nombre de sequences croissantes: %d \n",seq_crois);
  printf("la plus grande sous-séquence est :\n");
  afficher_ss(t,ind_start,ind_end);
  printf("\n");
}