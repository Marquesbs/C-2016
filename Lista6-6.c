#include <stdio.h>

main()
{
	char url[]="notas.txt";
	char aluno[20];
	int k=0, alunovet[10];
	float nota[1], media=0.0, mediat=0.0;
	FILE *arq;
	
	arq = fopen(url, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		for(k=0;k<10;k++){
			fscanf(arq,"%s\n",aluno);
			fscanf(arq,"%.2f\n",media);
			printf("Aluno->%s de media->%.2f", aluno, media);
			mediat=mediat+media;
			}
		mediat=mediat/10;
		printf("Media geral da turma->%.2f",mediat);
		
	fclose(arq);
}
}
