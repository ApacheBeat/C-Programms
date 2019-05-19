#include <stdio.h>

int main(){
	
	int multiplos=0, suma = 0, i;
	for(i = 1; i < 100; i++){	
		printf("Number %d ", i);
		if(i%5==0){
			printf("<-- This number is multiple of five\n");
			suma+=i;
			++multiplos;
		}
	}
	printf("There's %d multiple numbers between 0 and 99\n", multiplos);
	printf("The sum of all of them is: %d", suma);
	system("pause");	
}