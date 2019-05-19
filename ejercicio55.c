#include <stdio.h>
#include <stdlib.h>

int main(){
	int month, days, year;
	//double year;
	printf("===================================================================================\n");
	printf(" This program gets a month as a number (DEC = 1, FEB = 2) and a year says how many "
		   "                        has or will have in the future\n");
	printf("===================================================================================\n");
	printf("Please, introduce a month and a year: ");
	scanf("%i %i \n", &month, &year);
	
	switch(month){
		case 2 :
			if ((year%4==0)||((year%100==0)&&(year%400==0))){
				days = 29;
				break;
			}else{
				days = 28;
				break;
			}
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			days = 30;
			break;
		default :
			days = 31;
			break;
	}
	
	printf("The month introduced (%d) has %d days.\n", month, days);
	printf("===================================================================================");
	system("pause");	
}