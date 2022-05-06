#include <stdio.h>
#include <conio.h>

main()
{
 int lin,col;
 int mat[2][6];
 for (lin=0; lin<=1; lin++)
 {
 for (col=0; col<=5;col++)
 {
 // aqui preenchemos a matriz
 printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
 // aqui no scanf preenchemos a matriz
 scanf("%d", &mat[lin][col]);
 }
 }
 //Imprimindo a matriz
 printf("\n\nMatriz\n\n");
 for (lin=0;lin<=1;lin++)
 {
 for (col=0;col<=5;col++)
 printf("Linha %d, coluna %d->%d\n",lin+1, col+1, mat[lin][col]);
 }
 
 printf("\n\n");
 
 for(lin=0;lin<=1;lin++){
 	for(col=0;col<=5;col++){
 		if((lin==1) && (col==0)){
 			printf("\n%d",mat[lin][col]," ");
		 						}
		else{
			printf("%d",mat[lin][col]," ");
					}
						}
							}
 getch();
}
