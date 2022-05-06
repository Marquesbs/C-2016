#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
int cont = 0;
char folha[3];
char folha3, folha4;
printf("Tipo da folha: ");
scanf("%s", folha);
char tipo4[3] = "a4";
char tipo3[3] = "a3";
if ( (strcmpi(folha,tipo4)) == 0)
{




printf("Comece a digitar:\n\t\t");
while( (folha4=getche()) != '.')
{
cont++;
if (cont%40==0)
{
printf("\n\t\t");
}
}
}
else if ( (strcmpi(folha,tipo3)) == 0)
{
printf("Comece a digitar:\n\t\t");
while( (folha3=getche()) != '.')
{
cont++;
if (cont%20==0)
{




printf("\n\t\t");
}
}
}
else {
printf("Formato invalido\n");
}
getch();
}

