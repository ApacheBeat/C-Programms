#include <stdio.h>
#include <stdlib.h>

int main(){

	float x =0, i=0, polinomio=0;
	
	for(i=-10; i<11;i++){
		x=i/2;
		polinomio= x*x+1;
		printf("En el punto %f, el valor de p(x) es: %f \n ",i, polinomio);
	}
	
	system("pause");	
}