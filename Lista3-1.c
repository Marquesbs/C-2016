#include <stdio.h>
#include <conio.h>
# include <stdlib.h>

main(){

	FILE *p;
	int i[100];
	int k;
	char c = "\n";
	if((p=fopen("dados.txt","w"))==NULL){
		printf("Erro ! IMpossivel abrir o arquivo !");
		exit(1);
	}
	i[0]=0;
	for(k<101;c;k++)
		putc(i[k]+c,p);
		i[k]=k;
	fclose(p);
}
