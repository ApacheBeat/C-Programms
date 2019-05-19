#include <stdio.h>

int main(){
	int x = 0, i;
	
	for(i=0;i<101;i++){
		x=x+i;
	}	

	printf("La suma de los 100 primeros numeros naturales es %d", x);
}