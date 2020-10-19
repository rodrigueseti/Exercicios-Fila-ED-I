void exe2(int tmpF, int tmpA)
{
	filaCirc fc[4];
	
	init(fc[0]);
	init(fc[1]);
	
	char c;
	int ut_tot = 0;
	int ut = tmpF;
	bool swtchSema = false;
	
	do {
		
		system("cls");
		printf("Cronometo: 00:00:%02d | Restante: 00:00:%02d\n ", ut_tot, ut);
		
		if(swtchSema) printf("\nAberto | ");
		else printf("\nFechado | ");
		printf("Goulart: Entrada -> ");
		exibir_LIFO(fc[0]);
		printf(" <- Saida");
		
		
		if(!swtchSema) printf("\nAberto | ");
		else printf("\nFechado | ");
		printf("Marcondes: Entrada -> ");
		exibir_LIFO(fc[1]);
		printf(" <- Saida");
		
		Sleep(1000);
		ut_tot++;
		ut--;
		
		if (!ut) {
			swtchSema = (swtchSema) ? false : true;
			ut = (swtchSema) ? tmpA : tmpF;
		}
		
		if (ut_tot % 2 == 0) {
			
			c = (rand() % 26) + 65;
			
			if (rand() % 10 >= 5) {
				
				if (!isFull(fc[0].cont))
					insert(fc[0], c);
					
			} else {
				
				if (!isFull(fc[1].cont))
					insert(fc[1], c);
				
			}
		}
		
		if (swtchSema) {
			
			if (!isEmpty(fc[0].cont)  && rand() % 10 >= 5) 
				c = remove(fc[0]);
		} else {
			
			if (!isEmpty(fc[1].cont)  && rand() % 10 >= 5) 
				c = remove(fc[1]);
		}
		
		
	} while (!kbhit());
}
