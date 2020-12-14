#include <stdio.h>
void main()
{
//declaration variables
float a,b,c,d,e,f,m,s;
//lire a
printf("note1= ");
scanf("%f",&a);
//lire b
printf("note2= ");
scanf("%f",&b);
//lire c
printf("note3= ");
scanf("%f",&c);

//lire c
printf("coef 1= ");
scanf("%f",&d);
//lire c
printf("coef 2= ");
scanf("%f",&e);
//lire c
printf("coef 3= ");
scanf("%f",&f);


m=((a*d)+(b*e)+(c*f))/(d+e+f);

printf("m=%.2f\n"  ,m);



}
