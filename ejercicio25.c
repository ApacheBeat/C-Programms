#include <stdio.h>
#include <stdlib.h>

int main(){
	int anoEnDias = 365;
	int diasEnHoras = 24;
	int horasEnMinutos = 60;
	int minutosEnSegundos= 60;
	
	printf("Un ano son %d segundos\n", anoEnDias*diasEnHoras*horasEnMinutos*minutosEnSegundos);

	system("PAUSE");
}