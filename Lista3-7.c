#include <stdio.h>
#include <conio.h>

main()
{
 int maior, lin, col, pos_col, pos_lin;
 int mat[10][10];
 for (lin=0; lin<10; lin++)
 {
 for (col=0; col<10;col++)
 {
 printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
 // aqui no scanf preenchemos a matriz
 scanf("%d", &mat[lin][col]);
 }
 }
 //Imprimindo a matriz
 printf("Matriz\n");
 for (lin=0;lin<10;lin++)
 {
 for (col=0;col<10;col++)
 printf("%d\t",mat[lin][col]);
 printf("\n\n");} 

 maior=mat[0][0];
 for(lin=0;lin<10;lin++)
{
  for(col=0;col<10;col++)
  {
      if(mat[lin][col]>maior)
      {
        maior=mat[lin][col];
        pos_lin=lin;
        pos_col=col;
      }
  }
}
	   
 printf("Maior valor e' %d localizado na linha %d , coluna %d", maior, pos_lin+1, pos_col+1);
 getch();
}
