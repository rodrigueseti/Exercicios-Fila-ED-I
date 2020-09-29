#include <stdio.h>
#include <conio2.h> //getch(); kbhit();
#include <windows.h> //system(); Sleep(); srand();
#include <time.h> //time();
//#include <stdlib.h>

#include "cabecalhos\ADT_PriorityCircularQueue.h"
//#include "cabecalhos\filaCircular.h"
#include "cabecalhos\exercicios.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char menu()
{
    //clrscr();
    system("cls");
	printf("[2] - Exercicio2 - semaforo | Desativado");
	printf("\n[3] - Teste fila circular com prioridade");
    printf("\n[ESC] - Sair \n");
    printf("Opcao:");
    return getche();
}


int main(int argc, char** argv) {
	
	char op;
	char elemento;
	
	srand(time(NULL));
	priorityCircularQueueType filaCirPri;
	item aux;
	//filaCirc fc;
	
    do{
        op = menu();
        
		switch (op) {
			
			case '2' : {
					//exe2();
				break;
			}
			
			case '3' : {
					
					constructor(filaCirPri);
					
					aux.item = 'V';
					aux.priority = 2;
					enQueue(filaCirPri, aux);
					
					aux.item = 'X';
					aux.priority = 3;
					enQueue(filaCirPri, aux);
					
					aux.item = 'U';
					aux.priority = 3;
					enQueue(filaCirPri, aux);
					
					displayQueue(filaCirPri);
					printf("\n");
					
					aux.item = 'T';
					aux.priority = 1;
					enQueue(filaCirPri, aux);
					
					displayQueue(filaCirPri);
					printf("\n");
					
					aux.item = 'S';
					aux.priority = 2;
					enQueue(filaCirPri, aux);
					
					displayQueue(filaCirPri);
					printf("\n");
					getch();
				break;
			}
		}
		
    }while (op != 27);
    
	return 0;
}
