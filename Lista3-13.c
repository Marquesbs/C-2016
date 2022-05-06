#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char x;
main () {
printf("Digite um caracter->");
scanf("%c",&x);
if (((x>=32) && (x<=47)) || ((x>=58) && (x<=64)) || ((x>=91) && (x<=96)) || ((x>=123) && (x<=126))){
	printf("Caracter e' um simbolo");
}

else if ((x>=65) && (x<=90)){
	printf("Caracter e' letra maiuscula");
}
else if ((x>=97) && (x<=122)){
	printf("Caracter e' letra miniscula");
}
else if ((x>=48) && (x<=57)){
	printf("Caracter e' um numero");
}
else{
	printf("Caracter invalido");
}
getch();
}
