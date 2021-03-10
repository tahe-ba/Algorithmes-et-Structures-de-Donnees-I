#include <stdio.h>
int mycielski (int n) {
    int i=0,m=2,c=1;
        for (i=2;i<=n;i++){
            c = 3*c+m;
            m = 2*m+1;
        }
return (c);
}

void main(){
int n;
    do {
    printf("n=");
    scanf("%d", & n);
  } while (n<0);
printf("c%d = %d\n",n,mycielski(n));
}