#define MAX_FILA 6

struct tipoElemento {
	char item;
	int prioridade;
};

struct tipoFilaCircularPrioridade {
	
	int inicio;
	int fim;
	int cont;
	tipoElemento fila[MAX_FILA];
};

void inserir (tipoFilaCircularPrioridade &f, tipoElemento elem) 
{
	tipoElemento elemAux;
	int i, j, testeLimite = f.cont;
	
	f.fim = (f.fim == MAX_FILA - 1) ? 0 : f.fim + 1;
	i = f.fim;
	j = (!i) ? MAX_FILA - 1 : f.fim - 1;
	
	f.fila[f.fim] = elem;
	
	while (testeLimite && f.fila[i].prioridade < f.fila[j].prioridade) {
		
		elemAux = f.fila[i];
		f.fila[i] = f.fila[j];
		f.fila[j] = elemAux;
		
		i = j--;
		j = (!i) ? MAX_FILA - 1 : j;
		testeLimite--;
	}
	f.cont++;
}
