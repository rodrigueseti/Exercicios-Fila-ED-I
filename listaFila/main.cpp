#include <stdio.h>
#include <conio2.h> //getch(); kbhit();
#include <windows.h> //system(); Sleep(); srand();
//#include <time.h> //time();
//#include <stdlib.h>

#include "cabecalhos\ADT_PriorityCircularQueue.h"
//#include "cabecalhos\filaCircularPrioridade_pt-br.h"
//#include "cabecalhos\filaCircular.h"
//#include "cabecalhos\exercicios.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char menu()
{
    system("cls");
	printf("[1] - fila circular com prioridade");
    printf("\n[ESC] - exit");
    printf("\nOpcao:");
    return getch();
}

void execPCQ()
{
	priorityCircularQueueType filaCirPri;
	constructor(filaCirPri);
	item aux;
	
	system("cls");
	printf("[1] Inserir");
	printf("\n[2] Remover");
	printf("\n[Esc] Exit");
	printf("\nOpcao: ");
	char op = getche();
	
	while (op != 27) {
		
		switch (op) {
			
			case '1' : {
				
				if(!isFull(filaCirPri.size)) {
					
					printf("\nElement: ");
					scanf("%c", &aux.item);
					
					printf("Priority <1/2/3> <A/M/B>: ");
					scanf("%d", &aux.priority);
					
					enQueue(filaCirPri, aux);
					
				} else printf("\n\nArray is full\n");
				
				break;
			}
			
			case '2' : {
				
				if (!isEmpty(filaCirPri.size))
					printf("\n\nElemento removido: %c\n", deQueue(filaCirPri));
				else printf("\n\nArray is empty");
				break;
			}
		}
		displayQueue(filaCirPri);
		printf("\n");
		printf("\n[1] Inserir");
		printf("\n[2] Remover");
		printf("\n[Esc] Exit");
		printf("\nOpcao: ");
		fflush(stdin);
		op = getche();
	}	
}

int main (int argc, char** argv) {
	
	char op;
	char elemento;
	system("title ADT Victor Taveira");
	//srand(time(NULL));
	
	//filaCirc fc;
	
    do {
        op = menu();
        
		switch (op) {
			
			case '1' : {
					execPCQ();
				break;
			}
			
			/*case '3' : {
				break;
			}*/
		}
		
    } while (op != 27);
    
	return 0;
}
