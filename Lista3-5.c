#include <stdio.h>
#include <conio.h>
int V1[10], V2[10], cont=0, a, PE;
main(){
	for (cont=0;cont<10;cont++){
		printf("Coloque um valor para vetor N->");
		scanf("%d",&a);
		V1[cont]=a;
		}
		printf("\n\n");
	for (cont=0;cont<10;cont++){
		printf("Coloque um valor para vetor M->");
		scanf("%d",&a);
		V2[cont]=a;
		}
	int PE=0;
	for (cont=0;cont<10;cont++){
		PE=PE+(V1[cont]*V2[cont]);
		}
	printf("\n\nO produto escalar dos vetores e' = %d",PE);
getch();
}

