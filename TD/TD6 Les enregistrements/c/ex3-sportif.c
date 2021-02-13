#include<stdio.h>
#include<string.h>
#define N 5
#define M 5
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
    sprintf(f->nat, "%c%c%c",full[0],full[1],full[2] );
    if(strlen(full)>3) printf("\t\tSeulement les trois premiers caracteres sont enregistrés\n");
}

void remplir_n_sportif(sportif* f,int n ){
    int i;
    for (i=0;i<n;i++){
        printf("veillez entrez les information du sportif n° %d\n",i+1);
        remplir_sportif(f);
    }
}

void afficher_sportif(sportif f) {
    printf("\tnom: %s\n", f.nom);
    printf("\tnum: %d\n", f.num);
    printf("\tnat: %s\n", f.nat);
}

void afficher_n_sportif(sportif f[],int n) {
    int i;
    for (i=0;i<n;i++){
        printf("information du sportif n° %d\n",i+1);
        afficher_sportif(f[i]);
    }
}

//from f to p
void copie_sportif(sportif* f,sportif* p) {
    int num_aux;
    char nom_aux[30];
    char nat_aux[3];
    num_aux=f->num;
    strcpy(nom_aux,f->nom);
    strcpy(nat_aux,f->nat);
    p->num=num_aux;
    strcpy(p->nom,nom_aux);
    strcpy(p->nat,nat_aux);
}

int compare_sportif(sportif* f, sportif* p){
    int x=strcmp(f->nom,p->nom),y=strcmp(f->nat,p->nat);
    if ((f->num==p->num)&&(x==0)&&(y==0)){
        return 1;
    } else return 0;
}

void recherche_commun(sportif f[],sportif p[],sportif* com[],int n,int m,int* r){
    int i,z,j=0,trouve;
    for (i=0;i<n;i++){
        for(z=0;z<m;z++){
            if ((compare_sportif(&f[i],&p[j]))==1){
                copie_sportif(&f[i],&com[j]);
                j++;
            } else trouve=0;
        }
    }
    *r=j;
    if (trouve==0)
    printf("pas de sportif inscrit dans les deux");
}

void main(){
sportif d1[N];
sportif d2[M];
sportif commun[N+M] ;
int a;
/*int n,m;
printf("Combien de sportifs sont inscrit dans la 1ere discipline:");
scanf("%d",&n);*/
remplir_n_sportif(d1,N);
remplir_n_sportif(d2,M);
//printf("%d",compare_sportif(&d1[0],&d2[0]));
recherche_commun(d1,d2,&commun,N,M,&a);
afficher_n_sportif(commun,a);
//afficher_sportif(commun[0]);
/*
remplir_sportif(&d1[0]);
copie_sportif(&d1[0],&d1[1]);
afficher_sportif(d1[0]);
afficher_sportif(d1[1]);
*/
}