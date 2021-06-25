#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int jugador;
	int piedra=1;
	int papel=2;
	int tijera=3;
	int maquina;
	int pjugador=0;
	int pmaquina=0;
	
	
	puts("Bienvenidos a piedra, papel, o tijera");
	
	printf("1.- piedra \n");
	printf("2.- papel \n");
	printf("3.- tijera \n");
	
	while (1){
	
	
	
	printf("\n ingrese una opcion (1-3): ");
	scanf("%i", &jugador);
	

	
	switch (jugador){
		case 1:
			printf ("piedra", piedra);
			break;
		case 2:
			printf ("papel", papel);
			break;
		case 3:
			printf ("tijera", tijera);
			break;
		default:
			printf("numero incorrecto ");
	}

	
	puts("\n \n turno maquina");
	
	srand(time(NULL));
	maquina= rand()%3 + 1;
	
	printf("la maquina eligio %i", maquina);
	
	
	
	if (jugador==maquina){
		printf(" \n Empate ");
	}
	if ((jugador==1 && maquina==2) || (jugador==2 && maquina==3) || (jugador==3 && maquina==1)){
		printf("\n GANA MAQUINA");
		pmaquina++;
		
		
	}	
	
	if ((jugador==1 && maquina==3) || (jugador==2 && maquina==1) || (jugador==3 && maquina==2)) {
	    printf("\n GANA JUGADOR");
		pjugador++;   	
	}
	


	


    if (pjugador==3){
    	printf("\n GANADOR JUGADOR!!!");
    	
	}

	if (pmaquina==3){
		printf("\n GANADOR MAQUINA!!!");
    
	}
	
	
	}
		
	return 0;
}
