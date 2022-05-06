#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	FILE *p;
	int i=0;
	int k=0;
	if((p=fopen("dados.txt","w"))==NULL)
	{
		printf("Erro ! Impossivel abrir o arquivo !");
		exit(1);
	}
	for(k<=100;i;k++)
	{
		fputc("Número->%d\n", i, *p);
		i = k;
	}
	fclose(p);
}
