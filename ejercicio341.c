#include <stdio.h>

int main(){

	int mes, dias;
	printf("Introduzca un numero de mes y le dire cuantos dias tiene: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 2 : dias = 28; break;
		case 4 :
		case 6 :
		case 9 :
		case 11 : 
			dias = 30;
			break;
		default :
			dias = 31;
	}

	printf("El mes seleccionado tiene %d dias\n", dias);
	system("pause");
}