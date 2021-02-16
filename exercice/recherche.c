#include <stdio.h>

void input(int * n) {
    do {
        printf(">> ");
        scanf("%d", n);
    } while ( * n <= 0);
}

void remplir(int * t, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("t[%d] :", i + 1);
        scanf("%d", t + i);
    }
}//complexité 2*n

void remplir_tab_croissant(int * f, int n) {
    int i, j;
    int tmp;
    printf("f[1]=");
    scanf( "%d",& f[0]);
    for (i = 1; i < n; i++) {
        printf("f[%d]=",i+1);
        scanf("%d",&tmp);
        if (tmp < f[i - 1]) {
            j = i;
            while ((tmp > f[j - 1]) || (j = 0)) {
                f[j] = f[j - 1];
                j = j - 1;
            }
            f[j] = tmp;
        } else {
            f[i] = tmp;
        }
    }
}

void afficher(int t[], int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d\t ", t[i]);
    }
    printf("\n");
}

int rechercheDicho(int f[], int n) {
    int elem;
    int trouve = 0;
    int id = 0;
    int ie = n;
    int im;
    printf("\nveillez entrer l'element que vous voulez trouvez: ");
    scanf("%d", & elem);
    while (!trouve && ((ie - id) > 1)) {
        im = (id + ie) / 2;
        trouve = (f[im] == elem);
        if (f[im] > elem)
            ie = im;
        else
            id = im;
    }

    if (f[id] == elem) return (id);
    else return (-1);
}

void recherche(int f[], int n) {
    int x = rechercheDicho(f, n);
    if (x != -1) {
            printf("l'element %d se trouve dans la position %d \n", f[x],x+1);
    } else
        printf("Pas de correspondance\n");
}

void recherche_seq(int f[], int n) {
    int i = 0, a = -1;
    int code;
    printf("\nveillez entrer l'element que vous voulez trouvez: ");
    scanf("%d", & code);

    do {
        if (f[i] == code) {
            a = i;
            printf("l'element %d se trouve dans la position %d \n", f[a],a+1);
        }
        i++;
    } while ((i < n) && (a != i));

    if (a == -1) {
        printf("Pas de correspondance\n");
    }
}

void main() {
    int n;
    int t[100];
    printf("taille de tableau ");
    input( & n);
    //remplir(t, n);
    remplir_tab_croissant(t,n);
    printf("***** recherche dichotomique *****");
    recherche(t, n);
    printf("\n**** recherche sequentiel ****");
    recherche_seq(t, n);
    //afficher(t,n);
}