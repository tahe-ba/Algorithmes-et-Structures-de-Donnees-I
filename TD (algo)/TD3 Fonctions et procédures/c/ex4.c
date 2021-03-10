#include <stdio.h>

void input(int *x,int *y) {
do {
    printf("n1=");
    scanf("%d", x);
  } while (*x <=0);

do {
    printf("n2=");
    scanf("%d", y);
  } while (*y <=0);
}

int sommeiviseur(int n){
    int d,s=0;
      for (d=1;d<=n/2; d++){
		if (n % d == 0)
		{
			s=s + d;
		}
	}
	return (s-1);
}  

int amis(int x, int y){
    if ((sommeiviseur(x)==y) && (sommeiviseur(y)==x)) {
        return 1;
    }else return 0;
}

void main(){
int n1,n2;
input(&n1,&n2);
if ((amis(n1,n2))==1) {
    printf("les deux nombres sont amis\n");
} else {
    printf("les deux nombres ne sont pas amis\n");
    }
}
