#include <stdio.h>

#include <string.h>

main(){

FILE *f;

char c="";

f = fopen("9.html.txt","r+");

while(!feof(f)){

fscanf(f,"%c",&c);

if(c == '<'){

while(c !='>'){fscanf(f,"%c",&c);}

}

else {

if(c!='>')

putch(c);

}

 }

