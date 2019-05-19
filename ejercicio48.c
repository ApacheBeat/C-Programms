#include <stdio.h>

int main(){

	int nPositivos = 0, nNegativos=0, i;
	float suma=0, numero;
	
	for (i=1;i<21;i++){
		printf("Introduzca el numero %d: ", i);
		scanf("%i",&numero);
		if(numero<0){
			suma+=numero;
			nNegativos++;
		}else {
			suma+=numero;
			nPositivos++;
		}
	}
	printf("Hay %d numeros positivos y %d numeros negativos; la suma de todos los numeros es %f\n",
			nPositivos, nNegativos, suma);
	
	system("pause");	
	
	}