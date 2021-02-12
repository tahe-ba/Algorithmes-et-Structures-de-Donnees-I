#include<stdio.h>

#define N 3
typedef struct {
    int code;
    char nom[30];
    float solde;
}client;

void remplir_client(client * f) {
    printf("\tcode: ");
    scanf("%d", & f -> code);
    printf("\tnom: ");
    while ((getchar()) != '\n');
    scanf("%[^\n]", f -> nom);
    printf("\tsolde: ");
    scanf("%f", & f -> solde);
}

void remplir_n_client(client * f, int n) {
    int i, j;
    client tmp;
    printf("saisir les informations du client 1\n");
    remplir_client( & f[0]);
    for (i = 1; i < n; i++) {
        printf("saisir les informations du client n° %d\n",i+1);
        remplir_client( & tmp);
        if (tmp.code < f[i - 1].code) {
            j = i;
            while ((tmp.code > f[j - 1].code) || (j = 0)) {
                f[j] = f[j - 1];
                j = j - 1;
            }
            f[j] = tmp;
        } else {
            f[i] = tmp;
        }
    }
}

void recherche_code(client * f, int n) {
    int i = 0, a = -1;
    int code;
    printf("\nveillez entrer le code du client que vous voulez trouvez: ");
    scanf("%d", & code);

    do {
        if (f[i].code == code) {
            a = i;
            printf("\tsolde du client %d est : %f\n", f[a].code, f[a].solde);
        }
        i++;
    } while ((i < n) && (a != i));

    if (a == -1) {
        printf("Pas de correspondance\n");
    }
}

void afficher_client(client f) {
    printf("\ninformation du client :\n");
    printf("\tcode: %d\n", f.code);
    printf("\tnom: %s\n", f.nom);
    printf("\tsolde: %f\n", f.solde);
}

int rechercheDicho(client * f, int n) {
    int co=0;
    int trouve = 0;
    int id = 0;
    int ie=n;
    int im;
    printf("\nveillez entrer le code du client que vous voulez trouvez: ");
    scanf("%d", & co);
    while (!trouve && ((ie - id) > 1)) {
        im = (id + ie) / 2;
        trouve = (f[im].code == co);
        if (f[im].code > co)
            ie = im;
        else
            id = im;
    }

    if (f[id].code == co) return (id);
    else return (-1);
}

void recherche_code_dicho(client * f, int n) {
    int x = rechercheDicho(f,n);
    if (x != -1) {
        printf("\nle client n° %d ayant le code %d a %.2f comme solde \n",x+1, f[x].code, f[x].solde);
        afficher_client(f[x]);
    } else
        printf("Pas de correspondance\n");
}

void main() {
    client liste[N];
    remplir_n_client(liste, N);
    //recherche_code(liste,N);
    //afficher_fiche(liste[rechercheDicho(liste, N)]);
    recherche_code_dicho(liste, N);
}