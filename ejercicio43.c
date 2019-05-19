#include <stdio.h>
#include <math.h>

#define MAXBASE 15
#define MAXEXP  7
int main(){
	int base, exponente, i;	
	printf("\n");
	for (exponente=1; exponente<=MAXEXP;exponente++) printf("%10i", exponente);
	printf("\n");
	for(i=0;i<78;i++){ printf("%c", 196); printf("\n");}
	for (base=1;base<=MAXBASE;base++) {printf("%2d %c", base, 179);}
	for(exponente=1;exponente<=MAXBASE;exponente++) {printf("10i", (long) pow(base, exponente));}
	printf("\n");	
	system("pause");
	}
	

