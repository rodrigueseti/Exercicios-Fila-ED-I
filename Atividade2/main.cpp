#include <stdio.h>
#include <conio2.h> //getch(); kbhit();
#include <windows.h> //system(); Sleep(); srand();
#include <time.h> //time();
//#include <stdlib.h>

#include "cabecalhos\filaCircular.h"
#include "cabecalhos\exercicios.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menuTempo(int &tmpF, int &tmpA)
{
    system("cls");
	printf("Tempo aberto (Segundos): ");
	scanf("%d", &tmpA);
	
	printf("Tempo fechado (Segundos): ");
	scanf("%d", &tmpF);
}


char menu()
{
    system("cls");
	printf("[1] - Executar");
	printf("\n[2] - Alterar tempo de abertura");
    printf("\n[ESC] - Sair");
    printf("\nOpcao: ");
    return getche();
}


int main(int argc, char** argv)
{
	char op;
	char elemento;
	system("title Atividade2 - Victor Taveira, Beatriz");
	
	int tmpAberto = 25;
	int tmpFechado = 20;
	
	srand(time(NULL));
	
	filaCirc fc;
	
    do{
        op = menu();
        
		switch (op) {
			
			case '1' : {
					exe2(tmpFechado, tmpAberto);
				break;
			}
			
			case '2' : {
					menuTempo(tmpFechado, tmpAberto);
				break;
			}
		}
		
    }while (op != 27);
    
	return 0;
}
