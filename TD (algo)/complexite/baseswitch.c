#include <stdio.h>
//return integer
int conv_dec_bin_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2 + 10 * conv_dec_bin_rec(n / 2));
    }
}
//just print resul
void conv_rec(int n,int m) {
    int r;
    if (n/m == 0)
        printf("%d", n%m);
    else {
        conv_rec(n/m ,m);
        printf("%d", n%m);
    }
}

int main(void) {
    int n,m;
    printf("n ");
    scanf("%d", & n);
    printf("m ");
    scanf("%d", & m);
    printf("n %d en base m %d\n",n,m);
    conv_rec(n,m);
}