#include <stdio.h>

FILE *arq_saida;
int n=0;

main(){
arq_saida = fopen("dados.txt","w");
if (arq_saida == NULL)
  {
    printf("Um erro ocorreu ao tentar criar o arquivo\n");
  }
for(n=0;n<=100;n++){
	fprintf(arq_saida,"%d\n", n);
}
fclose(arq_saida);
}
