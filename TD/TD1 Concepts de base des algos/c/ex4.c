#include <stdio.h>
void main()
{
//declaration variables
int a,b,c=0;
//lire a et b
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
//afficher a et b
printf("a=%d   b=%d \n",a,b);
//permutation
c=a;
a=b;
b=c;
/*
a=a+b:
b=a-b;
a=a-b;
*/
//afficher a et b permutée
printf("a=%d   b=%d\n",a,b);
}
