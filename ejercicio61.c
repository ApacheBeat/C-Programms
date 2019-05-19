#include <stdio.h>
#include <time.h>

int main(){
	int i, letras = 0, caracteres = 0;
	float ratio = 0;
	char numero = 0;
	printf("==================================================================\n");
	printf("      RANDOM ASCII CHARACTERS GENERATOR - Detection of English\n"
		   "               letters and ratio letters/characters\n");
	printf("==================================================================\n");
	
	for(i = 0;i<1000;i++){
		srand(time(NULL));
		numero=rand()%127;
		if((numero>='a' && numero<='z')||(numero>='A' && numero<='Z')){
			printf("                  Number %c is an English letter\n", numero);
			++letras;
		}else ++caracteres;
	}	
	ratio = letras/caracteres;
	printf("         There is a ratio of %d / %d o %f\n", letras, caracteres, ratio);
	printf("==================================================================\n");	
}