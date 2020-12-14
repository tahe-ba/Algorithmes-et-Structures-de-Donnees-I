#include<stdio.h>
void main() {
int nbr,i,compter;
    compter=0;
do {
    printf("valeur à tester: ");
    scanf("%d", &nbr);
}while(nbr<0);

if ((nbr==1)||(nbr==0)) {
    printf("%d n'est pas un nombre premier\n", nbr);
} else if (nbr==2) {
    printf("%d est un nombre premier\n", nbr);
} else {
for(i=2;i<nbr;i++)
    {
        if(nbr%i==0)
            compter=1;
    }    

if(compter==1)
    printf("%d n'est pas un nombre premier\n", nbr);
else if(compter==0)
    printf("%d est un nombre premier\n", nbr);
}
}