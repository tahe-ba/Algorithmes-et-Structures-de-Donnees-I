#include<stdio.h>
#define N 3
typedef struct {
    int code ;
    char nom[30];
    float solde ;
}client;

void remplir_client(client* f){
    printf("\tcode: ");
    scanf("%d",& f -> code);
    printf("\tnom: ");
    while ((getchar()) != '\n');
    scanf("%[^\n]", f -> nom);
    printf("\tsolde: ");
    scanf("%f",& f -> solde);
}

void ajouter_par_ordre(client* f,int p ,client x){
int i,z=1;
for(i=p-1;z=0;i++){
    if (i==-1){
        f[0]=x;
    } else if (i>=0){    
        if (f[i].code>x.code){
            f[i+1]=f[i];
            z=0;
        } else {
            f[i+1]=x;
        }
    }
}

}

void remplir_n_client(client* f,int n){
    int i,j;
    client tmp;
    printf("saisir les informations du client 1\n");   
    remplir_client(&f[0]); 
    for(i=1;i<n;i++){
        printf("saisir les informations du client 2\n");   
        remplir_client(&tmp); 
        if(tmp.code<f[i-1].code){
            j=i;
            while((tmp.code>f[j-1].code)||(j=0)){
                f[j]=f[j-1];
                j=j-1;
            }
            f[j]=tmp;
        } else {
            f[i]=tmp;
        }
        //ajouter_par_ordre(f,i,tmp);
    }
}

void recherche_code(client* f, int n) {
    int i = 0, a = -1;
    int code;
    printf("\nveillez entrer le code du client que vous voulez trouvez: ");
    scanf("%d", & code);

    do {
        if (f[i].code == code) {
            a = i;
            printf("\tsolde du client %d du client %d : %f\n", f[a].code ,f[a].solde);
            }
        i++;
    } while ((i < n) && (a != i));

    if (a == -1) {
        printf("Pas de correspondance\n");
    }
}
void main(){
    client liste[N];
    remplir_n_client(liste,N);
    recherche_code(liste,N);
}