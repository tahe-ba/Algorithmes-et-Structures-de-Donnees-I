#include <stdio.h>
#include<string.h>
#define N 3
typedef struct {
    char rue[20];
    int code ;
    char ville [20];
}adresse;

typedef struct {
    int jour;
    int mois;
    int anne;
}birth;

typedef struct {
    char nom[30];
    char prenom[30];
    adresse adr;
    int number;
    birth date ;
}fiche; 


void remplir_date(birth* f) {
    printf ("saisir la date de naissance de l'employé:\n");
        printf("\tjour: ");
        scanf("%d",&f->jour);
        printf("\tmois: ");
        scanf("%d",&f->mois);
        printf("\tannée: ");
        scanf("%d",&f->anne);
}

void remplir_adr(adresse* f) {
    printf ("saisir l'adress de l'employé:\n");
        printf("\tnom de la rue: ");
        scanf("%s",f->rue);
        printf("\tcode postal : ");
        scanf("%d",&f->code);
        printf("\tnom de la ville: ");
        scanf("%s",f->ville);
}

void remplir_fiche(fiche* f) {
        printf("\tnom: ");
        scanf("%s",f->nom);
        printf("\tprenom: ");
        scanf("%s",f->prenom);
        remplir_adr(&f->adr);
        printf("\tnumero de telephone: ");
        scanf("%d",&f->number);
        remplir_date(&f->date);
}

void remplir_n_fiche(fiche* f,int n) {
int i;
    for (i=0;i<n;i++){
        printf ("\nsaisie des informations de l'employé n° %d:\n",i+1);
        remplir_fiche(&f[i]);
    }
}

void afficher_adresse(adresse f){
    printf("\tnom de la rue : %s\n",f.rue);
    printf("\tcode postal : %d\n",f.code);
    printf("\tville : %s\n",f.ville);

}

void afficher_date(birth f){
    printf("\t%d/%d/%d\n",f.jour,f.mois,f.anne);
}

void afficher_fiche(fiche f) {
    printf("\nfiche de l'employé :\n");
    printf("\tnom: %s\n",f.nom);
    printf("\tprenom: %s\n",f.prenom);
    printf("adresse de l'employé\n");
    afficher_adresse(f.adr);
    printf("\tnumero de telephone: %d\n",f.number);
    printf("date de naissance de l'employé :\n");
    afficher_date(f.date);
}

void recherche_nom(fiche* f,int n) {
int i;
char name[30];
int a;
    printf("veillez entrer le nom que vous voulez trouvez: ");
    scanf("%s",name);
    for (i=0;i<n;i++){
        if (strcmp(f[i].nom,name) == 0) {
            a=i;
        }
    }
afficher_fiche(f[a]);
}

void recherche_tel(fiche* f,int n) {
int i,a;
int num;
    printf("veillez entrer le numero de telephone que vous voulez trouvez: ");
    scanf("%d",&num);
    for (i=0;i<n;i++){
        if (f[i].number == num) {
            a=i;
        }
    }
afficher_fiche(f[a]);
}

void main (){
fiche f1;
fiche liste [N];
//remplir_fiche(&f1);
//afficher_fiche(f1);
remplir_n_fiche(liste,N);
recherche_nom(liste,N);
recherche_tel(liste,N);

}
//rechercche par nom 