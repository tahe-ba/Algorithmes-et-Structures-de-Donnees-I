#include <stdio.h>
void main() {
  int a = 0 , e = 0 ,i = 0 , o = 0 ,u = 0 ;
  char c;
  flush(stdin);
  printf("Entrez un texte qui se termine par le caractère #) :\n");
  c = getchar();
  while (c != '#') {

    if ((c == 'a') || (c == 'A'))
        a++;
    else if ((c == 'e') || (c == 'E'))
        e++;
    else if ((c == 'i') || (c == 'I'))
        i++;
    else if ((c == 'o') || (c == 'O'))
        o++;
    else if ((c == 'u') || (c == 'U'))
        u++;
    c = getchar();
  }
  printf("A, a : %d\n", a);
  printf("E, e : %d\n", e);
  printf("I, i : %d\n", i);
  printf("O, o : %d\n", o);
  printf("U, u : %d\n", u);
  }
