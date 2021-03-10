#include <stdio.h>
void main() {
    int i,k,a,b,c;
    i=150;
    k=0;
    while ((i<=410)&&(k<4)) {
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        if (a*a*a+b*b*b+c*c*c) 
        {
            printf("%d est cubique\n",i);
            k++;
        }
        i++;
    }
}