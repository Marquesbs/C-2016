#include <stdio.h> 
#include <stdlib.h> 

main() 
{ 

float tmedio; 
int tempo[3],mt=9999,st=0; 
int melhorvolta,i; 

for(i=0;i<3;i++) 
{ 
printf("\ndigite o tempo obtido na %d volta em minutos:\n",i+1); 
scanf("%d",&tempo[i]); 
if( tempo[i] < mt) 
{ 
mt=tempo[i]; 
melhorvolta=i; 
} 
st=st+tempo[i]; 
} 
tmedio=st/3; 
printf("\no melhor tempo foi %d\n ",mt); 
printf("\na volta que ocorreu o melhor tempo foi a %d\n ",melhorvolta+1); 
printf("\ntempo medio das 3 voltas: %f\n ",tmedio); 

system("pause"); 

}
