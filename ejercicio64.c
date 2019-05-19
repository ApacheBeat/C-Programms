#include <stdio.h>
#include <math.h>

int main(){
	int number=0;
	char* binary = NULL;
	
	printf(" ==================================================================\n");
	printf("                     REAL TO BINARY CONVERTER				  \n");	
	printf(" ==================================================================\n");
	printf(" Introduce a real number and this program will convert it to binary\n");
	printf("               Introduce a real number: ");
	scanf("%i \n", &number);
	while(number%2>1){
		binary = binary + (number%2);
	}
	printf("===================================================================\n");	
	printf("The number %i in binary is %s\n", number, binary);
	printf("===================================================================\n");	
}