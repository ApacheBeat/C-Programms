#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("0||0||0 = %i\n", 0||0||0);
	printf("0||0||1 = %i\n", 0||0||1);
	printf("0||1||0 = %i\n", 0||1||0);
	printf("0||1||1 = %i\n", 0||1||1);
	printf("1||0||0 = %i\n", 1||0||0);
	printf("1||0||1 = %i\n", 1||0||1);
	printf("1||1||0 = %i\n", 1||1||0);
	printf("1||1||1 = %i\n", 1||1||1);
	

	system("PAUSE");
}