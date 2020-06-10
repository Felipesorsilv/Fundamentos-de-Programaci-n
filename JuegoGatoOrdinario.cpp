#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char matriz[3][3], rpt,c,menudos;
	int i, j,fil, col, ganador=0, turno=1;
	
	printf("Bienvenido al juego del Gato, Ashi es!\n");
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=' ';
			printf("[%c]", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nPresione X para jugar / N para salir: ");
	scanf("%c", &rpt);
	if(rpt == 'X' || rpt == 'x'){
		do{
			if(turno%2==1){
				do{
					printf("\nBienvenido Jugador 1: \n");
					printf("Digite fila: ");
					scanf("%d", &fil);
					printf("Digite columna: ");
					scanf("%d", &col);
					
					if(matriz[fil][col] == 'x' || matriz[fil][col] == 'o' || fil > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				}while(matriz[fil][col] == 'x' || matriz[fil][col] == 'o' || fil > 2 || col > 2);
				
				matriz[fil][col]='x';
				
				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			} else if(turno%2==0){
				
				
					do{
					printf("\nTurno de la CPU: \n");
					fil= rand() %2;
					col= rand() %2;	
					if(matriz[fil][col] == 'x' || matriz[fil][col] == 'o' || fil > 2 || col > 2){
						printf("\nError Error Coordenadas no validas, pruebe otra vez.\n");
					}
				} while(matriz[fil][col] == 'x' || matriz[fil][col] == 'o' || fil > 2 || col > 2);
				
				matriz[fil][col]='o';
				
				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
				}
				
			
			
			if(matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 1 ahora puedes llamarme maestro.\n");
			}
			
			if(matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 2 no se como le hiciste pero ganaste pd: jugador 1.\n");
			}
			
		} while(ganador != 1);
		}
		else
		if(rpt == 'y'||rpt == 'Y') {
		system("cls");
		printf("\nDe todas formas no queria que jugaras culero .\n");
	}
	
	return 0;
}
