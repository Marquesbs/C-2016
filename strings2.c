#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
	char str1[100], str2[100];
	printf("Entre com uma string:");
	gets(str1);
	printf("\n\nEntre com outra string: ");
	if((strcmp(str1,str2))<0)
		printf("\n\n%s e' menor que %s", str1, str2);
	else if((strcmp(str1, str2))>0)
	printf("\n%s e' maior que %s", str1, str2);
	else
		printf("\n\n%s e' igual a %s",str1, str2);
	
getch();
}
