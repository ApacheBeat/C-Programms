#include <stdio.h>

int main(){
	
	float nota; 
	printf("Introduce la nota: ");
	scanf(" %f",& nota);
	
	if (nota <5){
		printf("El estudiante está suspendido");
	}else if (nota <7){
		printf("El estudiante esta aprobado");
	} else if (nota <8.5){
		printf("El estudiante tiene un notable");
	} else if (nota < 9){
		printf("El estudiante tiene un sobresaliente");
	} else {
		printf("El estudiante tiene matricula de honor");
	}
}