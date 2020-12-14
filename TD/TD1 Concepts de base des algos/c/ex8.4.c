#include <stdio.h>
void main()
{
	float  v,r,h;
	const float pi= 3.14 ;
	printf("rayon = ");
	scanf("%f", &r);
	printf("hauteur = ");
	scanf("%f", &h);
	
	v=pi*r*r*h;
	
	printf("le volume du cylindre est %.2f\n",v);
}
