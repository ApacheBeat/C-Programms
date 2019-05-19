#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, discriminante, raiz1, raiz2;
	printf("Introduzca los coeficientes de la ecuacion: ");
	scanf(" %f, %f, %f",&a,&b,&c);
	if(a==0){
		printf("No se trata de una ecuacion de segundo grado.");
	}else{
		discriminante = pow(b,2)-4*a*c;
		if(discriminante<0){
			printf("La ecuacion no tiene raices reales");
		}else{
			discriminante = sqrt(discriminante);
		}
			raiz1 = ((-b) + discriminante)/(2*a);
			raiz2 = ((-b) - discriminante)/(2*a);
			printf("Las raices de la ecuacion son: %f y %f", raiz1, raiz2);
	}		
system("PAUSE");
}
