#include <stdio.h>
#include <string.h>

struct carros {
char marca [15];
int ano;
char cor [10];
real preco;
};

struct ficha_pessoal {
char nome [5];
long int telefone;
struct endereco end;
};


struct ficha_pessoal vet_func[100];

main ( ){
int i,j;

for (i=0;i<2;i++){
printf ("Entre com o nome:");
scanf ("%s",&vet_func[i].nome);
printf ("Telefone:");
scanf ("%d",&vet_func[i].telefone);
printf ("Rua:");
scanf ("%s",&vet_func[i].end.rua);
printf ("Número:");
scanf ("%d",&vet_func[i].end.numero);
printf ("Bairro:");
scanf ("%s",&vet_func[i].end.bairro);
printf ("Cidade:");
scanf ("%s",&vet_func[i].end.cidade);
printf ("Cep:");
scanf ("%d",&vet_func[i].end.CEP);
}

for (i=0;i<2;i++)
{
printf ("\nNome:%s",vet_func[i].nome);
printf ("\nTelefone:%d",vet_func[i].telefone);
printf ("\nRua:%s",vet_func[i].end.rua);
printf ("\nNúmero:%d",vet_func[i].end.numero);
printf ("\nBairro:%s",vet_func[i].end.bairro);
printf ("\nCidade:%s",vet_func[i].end.cidade);
printf ("\nCep:%d",vet_func[i].end.CEP);
}
getch();
}
