#include <stdio.h>

main()
{
	char url[]="notas.txt";
	char aluno[20];
	int k=0, alunovet[10];
	float nota[1], media=0.0;
	FILE *arq;
	
	arq = fopen(url, "w");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		for(k=0;k<10;k++){
			printf("Entre com o nome do aluno %d->",k+1);
			scanf("%s",&aluno);
			alunovet[k]=aluno;
			printf("Nota 1->");
			scanf("%.2f", &nota[0]);
			printf("Nota 2->");
			scanf("%.2f", &nota[1]);
			media=(nota[0]+nota[1])/2;
			fprintf(arq, "Nome do aluno: %s<->Nota1: %.2f<->Nota2: %.2f\nMédia:%.2f\n", alunovet[k],nota[0],nota[1],media);
			}
	fclose(arq);
}
}
