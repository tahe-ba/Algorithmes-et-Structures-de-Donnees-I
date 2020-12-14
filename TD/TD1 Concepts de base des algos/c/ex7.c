#include <stdio.h>
void main()
{
	int s,b10,b5,p2,p1;
	printf("Entrer une somme d'argent: ");
	scanf("%d", &s);	
b10=s/10;
s=s%10;
b5=s/5;
s=s%5;
p2=s/2;
s=s%2;
p1=s/1;
s=s%1;
if (b10!=0)
printf("Il faut %d billet(s) de 10 EURO \n", b10);
if(b5!=0)
printf("Il faut %d billet(s) de 5 EURO \n", b5);
if(p2!=0)
printf("Il faut %d piece(s) de 2 EURO \n", p2);
if (p1!=0)
printf("Il faut %d piece(s) de 1 EURO \n", p1);
}
