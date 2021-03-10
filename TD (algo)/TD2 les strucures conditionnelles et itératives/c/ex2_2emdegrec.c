#include <stdio.h>
#include <math.h>
void main()
{
 int A, B, C;
 double D; /* Discriminant */
 printf("Calcul des solutions reelles d'une equation du second \n");
 printf("degre de la forme   ax^2 + bx + c = 0 \n\n");
 printf("Introduisez les valeurs pour a, b, et c : \n");
 printf("a=");
 scanf("%i", &A);
 printf("b=");
 scanf("%i", &B);
 printf("c=");
 scanf("%i", &C);
 printf("\n");
 
 /* Calcul du discriminant b^2-4ac */
 D = pow(B,2) - 4.0*A*C;
 
 /* Distinction des diff�rents cas */
 if (A==0 && B==0 && C==0) /* 0x = 0 */
 		printf("Tout reel est une solution de cette equation.\n");
 else if (A==0 && B==0)  /* Contradiction: c # 0 et c = 0 */  
 		printf("Cette equation ne possede pas de solutions.\n");
 else if (A==0) /* bx + c = 0 */ 
    {
     printf("La solution de cette equation du premier degre est :\n"); 
     printf(" x = %.4f\n", (double)C/B);
    }
 else if (D<0)  /* b^2-4ac < 0 */ 
     printf("Cette equation n'a pas de solutions reelles.\n");
 else if (D==0) /* b^2-4ac = 0 */ 
    {
     printf("Cette equation a une seule solution reelle :\n");
     printf(" x =  %.4f\n", (double)-B/(2*A));
    }
 else /* b^2-4ac > 0 */ 
    { 
     printf("Les solutions reelles de cette equation sont :\n");
     printf(" x1 = %.4f\n", (-B+sqrt(D))/(2*A));
     printf(" x2 = %.4f\n", (-B-sqrt(D))/(2*A));
    }
}


