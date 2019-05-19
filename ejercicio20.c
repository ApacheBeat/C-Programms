#include <stdio.h>
#include <stdlib.h>

int main(){
	char caracterMayuscula='A';
	char caracter2='a';

	if (caracterMayuscula>caracter2){
		printf("Las mayusculas van antes que las minusculas\n");
	}
	else{
		printf("Las minusculas van antes que las mayusculas\n");
	}
	
	system("PAUSE");	
}