#include <stdio.h>
#include <conio2.h> //getch(); kbhit();
#include <windows.h> //system(); Sleep(); srand();
#include <time.h> //time();
//#include <stdlib.h>

#include "cabecalhos\filaCircular.h"
#include "cabecalhos\exercicios.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char menu()
{
    //clrscr();
    system("cls");
	printf("[1] - Exercicio2 - semaforo");
	printf("[2] - Alterar tempo de abertura");
    printf("\n[ESC] - Sair \n");
    printf("Opcao:");
    return getche();
}


int main(int argc, char** argv)
{
	char op;
	char elemento;
	
	srand(time(NULL));
	
	filaCirc fc;
	
    do{
        op = menu();
        
		switch (op) {
			
			case '1' : {
					exe2();
				break;
			}
		}
		
    }while (op != 27);
    
	return 0;
}
