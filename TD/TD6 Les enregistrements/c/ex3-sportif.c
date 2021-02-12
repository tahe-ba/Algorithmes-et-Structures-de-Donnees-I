#include<stdio.h>
#include<string.h>
typedef struct {
    int num;
    char nom[30];
    char nat[3];
}sportif;

void remplir_sportif(sportif * f) {
    char full[20];
    printf("\tNumero: ");
    scanf("%d", & f -> num);
    printf("\tNom: ");
    while ((getchar()) != '\n');
    scanf("%[^\n]", f -> nom);
    printf("\tNationalité: ");
    scanf("%s", full);
    sscanf(f->nat, "%c%c%c",&full[0],&full[1],&full[2] );
    if(strlen(full)>3) printf("\t\tSeulement les trois premiers caracteres sont enregistrés\n");
}

void remplir_n_discipline(sportif* f,int n ){
    int i;
    for (i=0;i<n;i++){
        printf("veillez entrez les information des sportifs de la discipline n° %d\n",i+1);
        remplir_sportif(f);
    }
}


void main(){
sportif discipline [2];
sportif commun ;
remplir_n_discipline(discipline,2);

}