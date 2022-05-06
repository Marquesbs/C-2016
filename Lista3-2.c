#include <stdio.h>
#include <conio.h>

int cont=0,N, vetor[8];
main() {

for(cont=0;cont<8;cont++){
	printf("Entre com o valor para o vetor->");
	scanf("%d",&vetor[cont]);
}
printf("Vetor invertido pela metade:\n");

for(cont=4;cont<8;cont++){
	printf("%d\n",vetor[cont]);
}
for(cont=0;cont<4;cont++){
	printf("%d\n",vetor[cont]);
}
getch();
}
