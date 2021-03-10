#include <stdio.h>
void main ()
{
	float tp,exp,exf,nf;
	
	printf("note tp: ");
	scanf("%f", &tp);
	printf("note examen partiel: ");
	scanf("%f", &exp);
	printf("note examen final: ");
	scanf("%f", &exf);
	
	nf=((tp*20)/100)+((exp*30)/100)+((exf*50)/100);
	
	if ((nf>=16) && (nf<=20))
		printf("Tres bien\n");
	else if (nf>=14) 
		printf("Bien\n");
	else if (nf>=12)
		printf("Assez bien\n");
	else if (nf>=10) 
		printf("Passable\n");
	else 
		printf("Echec\n");
		
	printf("la note finale de l'etudiant est %.3f\n",nf);
}
