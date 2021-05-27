#include <stdio.h>
#include <stdlib.h>

/* 1)Mostrar por pantalla los números del 100 al 200 indicando cual es par y cual es impar. */

int main(int argc, char *argv[]) {
	
	int i=100,i2=100;
	
	printf("Los numeros pares son: ");
	
	for(i;i<=200;i++){
		
		if(i%2 == 0){
		
		printf("- %d ",i);
		
	    }
	}
	
	printf("\n\n");	
	printf("Los numeros impares son: ");
	
	for(i2;i2<=200;i2++){
		
		if(i2%2 != 0){
		
		printf("- %d ",i2);
		
	    }
	}	
	printf("\n");
	getch();
	
	return 0;
}


