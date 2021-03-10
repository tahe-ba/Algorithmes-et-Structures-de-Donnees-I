#include <stdio.h>
void main() {
    int n,i;
    float x,moy,max,min,som;

do {
    printf("nombre des notes: ");
	scanf("%d", &n);
} while (n<1);

do{
printf("1 note=");
scanf("%f", &x);
} while (!((x>=0)&&(x<=20)));

max=x;
min=x;
som=x;
for (i = 2; i <=n; i++){
    do {
        printf("%d note=",i);
        scanf("%f", &x);
    } while (!((x>=0)&&(x<=20)));
        som+=x;
        if (x>max){
            max=x;
        }
        if (x<min) {
            min=x;
        }
    //printf("%.2f\n",x); 
}
moy=som/(float)n;
printf("la meilleure note est %.2f\n",max);
printf("la pire note est %.2f\n",min);
printf("la moyenne des notes est %.2f\n",moy);

}