/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
leIdade ()
{
  int i;
  printf ("Digite a idade (0 a 110)");
  scanf ("%d", &i);

  while (i < 0 || i > 110)
    {
      printf ("Digite a idade novamente");
      scanf ("%d", &i);

      return i;
    }
}

int
main ()
{
  int id1, id2;

  id1 = leIdade ();
  id2 = leIdade ();
  printf ("dif= %d", id1 - id2);

  return 0;
}
