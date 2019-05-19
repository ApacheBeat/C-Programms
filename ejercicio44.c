#include <stdio.h>
#include <time.h>

int main(){
	int secreto, numero, salir=0;
	srand(time(NULL));
	secreto=rand()% 1000 + 1;
	printf("\nAdivine el numero secreto.\n"
			" Para salir, introduzca el numero 0\n");
			
	do{
		printf("Introduzca un numero del 1 al 1000: ");
		scanf("%d", &numero);
		if(numero == 0){
			salir=1;
		}else{
			if(numero != secreto){
				printf("Ese no es el numero secreto.\n");
				if(secreto>numero){
					printf("El numero secreto es mayor\n");
				}else{
					printf("El numero secreto es menor\n");
				}
			}
			else{
				printf("Has acertado!\n");
			}
		}
	}while(numero != secreto && !salir);
}
