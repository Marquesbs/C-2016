#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {
   /* Declarações */
   char c;
   int i;
   printf("Usando char\n\n");
   for (c = 0; c < 127; c++)
      printf("Pos %d: char %c \t", c, c);  

   printf("\n\nUsando int\n");
   for (i = 0; i < 127; i++)
      printf("Pos %d: char %c \t", i, i);  

getch();
}
