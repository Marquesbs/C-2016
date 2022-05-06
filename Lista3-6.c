#include <stdio.h>
#include <conio.h>

main()
{
 int lin,col;
 int mat[5][5];
 for (lin=0; lin<=4; lin++)
 {
 for (col=0; col<=4;col++)
 {
 // aqui preenchemos a matriz
 if(lin==col){
 	mat[lin][col]=1;}
 else{
 	mat[lin][col]=0;}
 }
 }
 //Imprimindo a matriz
 printf("Matriz\n\n");
 for (lin=0;lin<=4;lin++)
 {
 for (col=0;col<=4;col++)
 printf("%d\t",mat[lin][col]);
 printf("\n\n"); 
 }
 
 printf("\n\n");
 getch();
}
