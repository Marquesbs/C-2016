#include <stdio.h>
#include <conio.h>

int ka=0, kb=0, vetorA[5], vetorB[8];
main() {
	for(ka=0;ka<5;ka++){
		printf("Entre com o valor %d do vetor A->\n", ka);
		scanf("%d",&vetorA[ka]);
						}
	printf("\n");

	for(kb=0;kb<8;kb++){
		printf("Entre com o valor %d do vetor B->\n", kb);
		scanf("%d",&vetorB[kb]);
						}
	for(ka=0;ka<5;ka++){
		for(kb=0;kb<8;kb++){
			if(vetorA[ka]==vetorB[kb]){
				printf("vetorA[%d]->%d = vetorB[%d]->%d\n",ka, vetorA[ka], kb, vetorB[kb]);
				break;
										}
//			else if(ka==4 && kb==7){
//				printf("Valores imcompativeis");
//									}
							}
						}
getch();
}
	


