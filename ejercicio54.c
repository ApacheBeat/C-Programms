#include <stdio.h>
#include <stdlib.h>
#define MAXIT 100

int main(){

	int it=0;
	float x, funcion, derivada;
	printf("Introducir un valor para calcular el algoritmo de \n"
			"Newton-Raphson de (-x^2+3) y aproximar una raiz de su funcion\n");
			scanf("%f", &x);
			
			do{
				funcion=(-x*x)+3;
				derivada=(-2*x);
				if(derivada == 0) x=x+0.001;
				else x=x-funcion/derivada;
				it++;
			}while(abs(funcion)>0.001 && it<MAXIT);

		printf("Una raiz de (-x^2+3) es %f\n", x);
	system("pause");	
}