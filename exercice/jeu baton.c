#include <stdio.h>

void main() {
  int nb, i, nb1, nb2;

  // number of battons inititialize input
  do {
    printf("Entrez le nombre de bâton : ");
    scanf("%d", & nb);
  } while (nb <= 0);

  //print all battons
  for (i = 0; i < nb; i++)
    printf("I");
  printf("\n");

  do {

    //player 1 input
    do {
      printf("Joueur 1, entrez le nombre de bâtons à tirer : ");
      scanf("%d", & nb1);printf("\b \b"); 
    } while (((nb1 > 3) || (nb1 <= 0)) || (nb1 > nb));
    //batton left
    nb -= nb1;
    //print batton number after player 1 input
    for (i = 0; i < nb; i++)
      printf("I");
    printf("\n");
    //printf("%d\n",nb);
    //result check
    if (nb == 0) {
      printf("==> joueur 2 gagne <==\n");
      break;
    }

    //player 2 input
    do {
      printf("Joueur 2, entrez le nombre de bâtons à tirer : ");
      scanf("%d", & nb2);
    } while (((nb2 > 3) || (nb2 <= 0)) || (nb2 > nb));
    //batton left
    nb -= nb2;
    //print batton number after player 2 input
    for (i = 0; i < nb; i++)
      printf("I");
    printf("\n");
    //printf("%d\n",nb);
    //result check
    if (nb == 0) {
      printf("==> joueur 1 gagne <==\n");
      break;
    }
  } while (nb >= 0);
}