#include <stdio.h>

int main(){

	int N, sumaPares=0, sumaImpares=0, i=0;
	printf("Introduzca un numero: ");
	
	do{
		printf("Introduzca N (N>0): ");
		scanf("%d", &N);
	}while(N<=0);
	
	for(i=0; i<=N; i++){
		if(i%2==0) sumaPares+=i;
		else sumaImpares+=i;
	}
	
	printf("La suma de todos los numeros pares de 0 a %d es %d\n", N, sumaPares);
	printf("La suma de todos los numeros impares de 0 a %d es %d\n", N, sumaImpares);
	system("pause");	
	
}