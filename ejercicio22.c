#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra ='D';
	if(letra>='A' && letra<='Z'){
		letra=letra-'A'+'a';
	}else{
		printf("Esta letra no es mayuscula.");
	}
	printf("Letra: %c\n", letra);
	system("PAUSE");	
}