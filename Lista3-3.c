#include <stdio.h>
#include <conio.h>

int cont=0,X, vetor[10];
main() {

for(cont=0;cont<10;cont++){
	printf("Entre com o valor para o vetor->");
	scanf("%d",&vetor[cont]);
}
printf("Digite um valor para comparar com os do vetor->");
scanf("%d",&X);

for(cont=0;cont<10;cont++)

	if (X==vetor[cont]){
		printf("Valor encontrado ! posicao e' %d",cont);
		break;}
	else if(cont==9){
		printf("Nao foi dessa vez !");
}

getch();
}
