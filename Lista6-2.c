#include <stdio.h>

FILE *arq_saida;
int n=0;

main(){
arq_saida = fopen("dados.txt","r");
if (arq_saida == NULL)
  {
    printf("Um erro ocorreu ao tentar criar o arquivo\n");
  }
for(n=0;n<=100;n++){
	fscanf(arq_saida,"%d\n", &n);
	printf("%d\n", n);
}
fclose(arq_saida);
}
