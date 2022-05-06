#include <stdio.h>

FILE *arq_saida;
int n=0;
char m[100];

main(){
arq_saida = fopen("pelba.txt","r");
if (arq_saida == NULL)
  {
    printf("Um erro ocorreu ao tentar criar o arquivo\n");
  }
while(n<10){
	fgets(m,100,arq_saida);
	n++;
	printf("Linha %d->%s\n", n, m);
}
fclose(arq_saida);
}
