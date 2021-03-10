/*
Ecrire une fonction "EstCroissant", 
qui permet de vérifier si 
les chiffres d’un entier N positif 
forment une progression croissante.

*/
#include <stdio.h>

int isup(int n){
    while (n>10) {
       if ( (n%10)> ((n/10)%10 )){
           return 1 ;/*a7aad akber men 3acharat = croissant*/
       } else if ( (n%10)< ( (n/10)%10 )) {
           return 0 ; /* 3acharat akber men a7ad = decroissant*/
       } 
    n /= 10 ;
    }
}

void input(int *n){
do {
    printf("n=");
    scanf("%d", n);
  } while (*n <=0);
}

void main () {
int n; 
input (&n);
if (isup(n)==1) {
    printf("Le nombre %d a des chiffres en progression croissante\n",n);
} else if (isup(n)==0){
    printf("Le nombre %d a des chiffres en progression decroissante\n",n);
}else {
    printf("Le nombre %d a des chiffres qui ne forment pas une progression ni croissante ni décroissante.",n);

}
}
