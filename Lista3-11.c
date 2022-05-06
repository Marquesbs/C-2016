#include <string.h> 

int main() { 
   char frase[255], palavra[20], *ptr; 
   int tam_frase, tam_palavra, cont=0; 
   printf("Informe a frase: "); 
   gets(frase); 
   tam_frase = strlen(frase); 
   printf("Informe a palavra: "); 
   scanf("%s", palavra); 
   tam_palavra = strlen(palavra); 
   ptr = frase; 
   do { 
      if (strncmp(ptr, palavra, tam_palavra) == 0) 
         cont++; 
      ptr++; 
   } while (*(ptr+tam_palavra-1) != '\0'); 
   printf("\n'%s' ocorre %d vezes em '%s'\n", palavra, cont, frase); 
   return 0; 
} 
