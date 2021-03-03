int recherche_i(int t[],int n,int i)
{
    i=0;
    if( i >= n ) // Si on est au dela de la taille du tableau
       return 1 ;
    if(t[i]%2==0) // Si trouver
       return 0;
     
    // Sinon , on cherche a la prochaine valeur
    return recherche(t,n,i+1);
}
 
int recherche_n(int t[],int n)
{
    if( n <0) // Si on est au dela de la taille du tableau
       return 0 ;
    if(t[n]%2==0) // Si trouver
       return 1;
     
    // Sinon , on cherche a la prochaine valeur
    return recherche(t,n-1);
}
 
