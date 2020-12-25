#include <stdio.h>
int sommediviseur(int n)
{
    int diviseur,sommed;
    sommed=0;
    for(diviseur=1;diviseur<=n/2;diviseur=diviseur+1)
      {
       if(n%diviseur==0)
         {
          sommed=sommed+1;
          }
       }
     return sommed;
}
void main(){   
    int nb1,nb2,A;
    printf("Donner un entier positif\n");
    scanf("%d",&A);
    for(nb1=A;nb1>=2;nb1=nb1-1)
      {
       for(nb2=nb1-1;nb2>=1;nb2=nb2-1)
         {
          if((sommediviseur(nb1)==nb2) && (sommediviseur(nb2)==nb1))
            {
             printf("les nombres %d et %d sont amis",nb1,nb2);
             }
          }
       }
}