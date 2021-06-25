#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

	int jugador;
	int piedra=1;
	int papel=2;
	int tijera=3;
	int maquina;
	int acumJugador=0;
	int acumMaquina=0;


	while(acumJugador !=3 && acumMaquina !=3){

        puts("\nBienvenidos a piedra, papel, o tijera\n\n");
        printf("1 - piedra \n");
        printf("2 - papel \n");
        printf("3 - tijera \n");
        printf("\nOpcion (1-3): ");
        scanf("%i", &jugador);

        switch(jugador){

            case 1:
                printf("\n\nJUGADOR ELIGIO: PIEDRA");

                break;

            case 2:
                printf("\n\nJUGADOR ELIGIO: PAPEL");

                break;

            case 3:
                printf("\n\nJUGADOR ELIGIO: TIJERA");
                //system("pause");
                break;

            default:
                printf("numero incorrecto ");

         }//switch



        srand(time(NULL));
        maquina= rand()%3 + 1;

        printf("\nMAQUINA ELIGIO %i", maquina);




        if (jugador==maquina){

            printf("\n\nEmpate\n");

        }else if ((jugador==1 && maquina==2) || (jugador==2 && maquina==3) || (jugador==3 && maquina==1)){

            printf("\n\nGANA MAQUINA\n");
            acumMaquina++;

            if(acumMaquina == 3){

                printf("\n\tLA MAQUINA GANO\n");

            }

        }else if ((jugador==1 && maquina==3) || (jugador==2 && maquina==1) || (jugador==3 && maquina==2)) {

            printf("\n\nGANA JUGADOR\n");
            acumJugador++;

             if(acumJugador == 3){


                  printf("\n\tFELICITACIONES GANASTE!!!!\n");

             }
         }

     }//while


	return 0;
}
