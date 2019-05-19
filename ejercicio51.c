#include <stdio.h>

int main(){
	int i, mulDos=0;
	
	for(i=10;i<235;i++){
		if(((i%2)==0)&&((i%3)==0)){
			mulDos++;
		}
	}
	
	printf("Hay %d multiples de dos y de tres\n", mulDos);
	
	system("pause");	
}