#include <stdio.h>
#include <stdlib.h>

int main(){
	int meses = 8;
	int mesesEnDias = 30;
	int dias = 23;
	int diasEnHoras = 24;
	int horas = 7;
	int horasEnMinutos = 60;
	int minutosEnSegundos= 60;
	
printf("%i meses son %i segundos\n", meses, meses*mesesEnDias*diasEnHoras*horasEnMinutos*minutosEnSegundos);
printf("%i dias son %i segundos\n", dias, dias*diasEnHoras*horasEnMinutos*minutosEnSegundos);
printf("%i horas son %i segundos\n", horas, horas*horasEnMinutos*minutosEnSegundos);
	
	system("PAUSE");
}