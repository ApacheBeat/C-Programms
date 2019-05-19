#include <stdio.h>
#include <math.h>

int main(){
	int numberOfDays=0; 
	short years = 0;
	int months = 0, days = 0;
	
	printf("==================================================================\n");
	printf("             YEARS, MONTHS AND DAYS CONVERTER				  \n");	
	printf("==================================================================\n");
	printf("Introduce a number of days and the program will tell you how many \n");
	printf("         years, months and days it consists of: ");
	scanf("%i\n", &numberOfDays);
		printf("Hyufut %i\n", numberOfDays);
	if(numberOfDays>365){
		years = (numberOfDays/365);
		numberOfDays = (float)years;
		printf("Hello %i\n", numberOfDays);
		months = (numberOfDays/30);
		numberOfDays = ((float)months-months)*30;
		days = numberOfDays;
	}else{
		years = 0;
		months = (numberOfDays/30);
		numberOfDays = (long)months*30;
		days = numberOfDays;
	}
	printf("==================================================================\n");	
	printf("This is %i years, %i months and %i days\n", years, months, days);
	printf("==================================================================\n");	
}