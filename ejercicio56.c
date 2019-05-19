#include <stdio.h>
#include <stdlib.h>

int main(){
	int day;
	str name;
	
	printf("===================================================================================\n");
	printf("   This program gets a days as a number of the week (MON = 1, TUE = 2) and says"
		   "                        which day of the week is.\n");
	printf("===================================================================================\n");
	printf("Introduce the day: ");
	scanf("%i", day);
	switch(day){
		case 1: name = "MONDAY";
		case 2: name = "TUESDAY";
		case 3: name = "WEDNESDAY";
		case 4: name = "THURSDAY";
		case 5: name = "FRIDAY";
		case 6: name = "SATURDAY";
		case 7: name = "SUNDAY";
	}
	printf("That day is: %c", name);
	printf("===================================================================================");
	system("pause");	
}