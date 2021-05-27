#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int opcion=0,cantidadHoras=0,montoPagar=0,bonificacion;
	int extraFinde= (30*50)/100;
	
	printf("ingrese 1 para modalidad semanal o 2 para modalidad de fin de semana: ");
	scanf("%d",&opcion);
		
	if(opcion==1 || opcion==2){
		
		printf("ingrese la cantidad de horas utilizadas: ");
		scanf("%d",&cantidadHoras);
		
		if(opcion==1){
			montoPagar= 50*cantidadHoras;
			
		}else{
			montoPagar= (50+extraFinde)*cantidadHoras;
			
		}
		
	    bonificacion=cantidadHoras/2;
	    //montoPagar += bonificacion;
		
		printf("\n");
		printf("Usted contrato %d horas y obtuvo %d horas de bonificacion \n",cantidadHoras,bonificacion);
		printf("Su monto a pagar es: %d",montoPagar );
				
	}else{
	printf("\n");
	printf("La opcion ingresada es incorrecta");
	
	}
	return 0;
}


