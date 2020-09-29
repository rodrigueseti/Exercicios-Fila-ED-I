
/*
void exe2 (void)
{
	filaCirc fc;
	init(fc);
	
	int tempoSema;
	int saidas = 0;
	char c;
	int x;
	int i;
	
	bool swtchSema = true;
	
	FILE *txtfp = fopen("arquivos\\exercicio2.txt", "w");
	
	do {
		
		tempoSema = (rand() % 11) + 10;
		swtchSema = (swtchSema) ? false : true;
		i = 0;
		while (i < tempoSema) {
			
			if (swtchSema) {
				
				if (!isEmpty(fc.cont)) {
					
					c = remove(fc);
					fprintf(txtfp, "Carro: [%C] | Tempo parado: 00:00:%02d\n", c, x + i);
					saidas++;
				}
				
				if (!isFull(fc.cont) && rand() % 10 >= 5) {
					
					c = (rand() % 26) + 65;
					insert(fc, c);
				}
				
			} else {
				
				if (!isFull(fc.cont) && rand() % 10 >= 5) {
					
					c = (rand() % 26) + 65;
					insert(fc, c);
				}
			}
			
			
			system("cls");
			printf("Cronometo: 00:00:%02d | tempoSemaforo: %d | ", i, tempoSema);
			
			if(swtchSema) printf("Aberto\n");
			else printf("Fechado\n");
			
			printf("Entrada -> ");
			exibir_LIFO(fc);
			printf(" Saida ->");
			
			Sleep(1000);
			i++;
		}
		x = i;
		
	} while (!kbhit());
	
	fclose(txtfp);
}
*/

