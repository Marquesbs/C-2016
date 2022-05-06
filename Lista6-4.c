#include <stdio.h>

FILE *arq_saida;
int k;
char c[50];

main(){
arq_saida = fopen("editor.txt","w+");
if (arq_saida == NULL)
  {
    printf("Um erro ocorreu ao tentar criar o arquivo\n");
  }
for(k=0;k<50;k++){
	printf("Entre com a linha %d do arquivo->", k+1);
	scanf("%s\n", &c);
	if(c=="FIM"||c=="fim"){
		break;
	}
	fprintf(arq_saida,"%s",c);
}
fclose(arq_saida);
}
