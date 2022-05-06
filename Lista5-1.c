#include <stdio.h>
#include <string.h>
#include <conio.h>

//a)

struct carros {
char marca [15];
int ano;
char cor [10];
real preco;
};

//b)

int vetcarros[20];
struc carros vetcarros[20];

//c)

//c1

void preencher{
int k=0;
for(k=0, k<3; k++){
	printf("Digite a marca do carro %d->", k+1);
	scanf("%c", &x.marca);
	printf("Digite o ano do carro %d->", k+1);
	scanf("%d", &x.ano);
	printf("Digite a cor do carro %d->", k+1);
	scanf("%c", &x.cor);
	printf("Digite o preco do carro %d->", k+1);
	scanf("%d", &x.preco);
	vetcarros[k]=x;
					}
			  }

//c2

void procurar{
int k=0;
int p;
printf("Digite o valor que deseja procurar->");
scanf("%d",&p);
for(k=0;k<3;k++){
	if p<=vetcarros[k].x.preco{
		printf("Marca do veiculo encontrado->%c",vetcarros[k].x.marca);
		printf("Ano do veiculo encontrado->%d",vetcarros[k].x.ano);
		printf("Cor do veiculo encontrado->%c",vetcarros[k].x.cor);
		printf("Preco do veiculo encontrado->%d",vetcarros[k].x.preco);
							  }
	else{
		printf("O veiculo %d nao bate com o valor informado",k+1);
		}			
			    }
			 }

//c3

void cmp_marca{
int k=0;
char m[15];
printf("Digite a marca que deseja procurar->");
scanf("%c",&c);
for(k=0;k<3;k++){
	if c==vetcarros[k].x.marca{
		printf("Marca do veiculo encontrado->%c",vetcarros[k].x.marca);
		printf("Ano do veiculo encontrado->%d",vetcarros[k].x.ano);
		printf("Cor do veiculo encontrado->%c",vetcarros[k].x.cor);
		printf("Preco do veiculo encontrado->%d",vetcarros[k].x.preco);
							  }
	else{
		printf("O veiculo %d nao tem a marca informada",k+1);
		}			
			    }

			  }

//c4

void verificacao{
int k=0;
char m[15];
int a;
char c[10];
printf("Digite a marca que procura->");
scanf("%c",&m);
printf("Digite o ano que procura->");
scanf("%d",&a);
printf("Digite a cor que procura->");
scanf("%c",&c);
for(k=0;k<3;k++){
	if c==vetcarros[k].x.cor || m==vetcarros[k].x.marca || a==vetcarros[k].x.ano{
		printf("Preco do veiculo encontrado->%d",vetcarros[k].x.preco);
							  }
	else{
		printf("O veiculo %d nao tem os dados informados",k+1);
		}			
			    }

				}

//c5

void off{
int z;
printf("Digite 0 se deseja sair do programa->");
scanf("%d",&z);
if z==0{
	exit();
	   }
else{
	break;
	}
		}


