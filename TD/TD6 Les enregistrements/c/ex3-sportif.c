#include<stdio.h>
#include<string.h>
#define N 3
#define M 3
typedef struct {
    int num;
    char nom[30];
    char nat[3];
}sportif;

void remplir_sportif(sportif * f) {
    char full[10];
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
        remplir_sportif(f+i);
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
void copie_sportif(sportif f,sportif* p) {
    p->num=f.num;
    strcpy(p->nom,f.nom);
    strcpy(p->nat,f.nat);
}

int compare_sportif(sportif f, sportif p){
    int x=strcmp(f.nom,p.nom),y=strcmp(f.nat,p.nat);
    if ((f.num==p.num)&&(x==0)&&(y==0)){
        return 1;
    } else return 0;
}

void recherche_commun(sportif f[],sportif p[],sportif * com,int n,int m,int* r){
    int i,z,k,j=0;
    for (i=0;i<n;i++){
        for(z=0;z<m;z++){
            if ((compare_sportif(f[i],p[z]))==1){
                copie_sportif(f[i],com+j);
                j++;
            }
        }
    }
    *r=j;
}

void main(){
sportif d1[N];
sportif d2[M];
sportif commun[N+M] ;
int a;
remplir_n_sportif(d1,N);
remplir_n_sportif(d2,M);
//afficher_n_sportif(d1,N);
recherche_commun(d1,d2,&commun,N,M,&a);
if(a!=0){
afficher_n_sportif(commun,a);
}else printf("aucun sportif");
/*
remplir_sportif(&d1[0]);
copie_sportif(d1[0],&d1[1]);
afficher_sportif(d1[0]);
*/
}