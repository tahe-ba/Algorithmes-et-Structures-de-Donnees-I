/*n strictement positif 
somme pair prod impaire
s= 0
p= 0
x <- n mod 10
n <- n div 10
if (x div 10)=0 alors 
    s <- s + x
sinon p <- p*x

    */
#include <stdio.h>

void sppi(int n,int *s,int *p){
int i=0;
*s=0;
*p=1;

while (n>0) {
    if (((n%10)%2)==0) {
        *s += (n%10) ;
    }else {
        *p *= (n%10);
        i++;
    }
    n /= 10 ;
}
if (i==0) {
    *p=0;
    }
}

void input(int *n){
do {
    printf("n=");
    scanf("%d", n);
  } while (*n <=0);
}

void main(){
int n,s,p;
input(&n);
sppi(n,&s,&p);
printf("la somme des nombre paire est %d \nle produit des nombres impaires est %d \n",s,p);
}

