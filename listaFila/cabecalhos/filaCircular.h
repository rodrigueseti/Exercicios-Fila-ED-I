#define MAX_FILA 6
struct filaCirc 
{
	int start;
	int	end;
	char fila[MAX_FILA];
	int cont;
};

void init(filaCirc &fc)
{
	fc.start =  0;
	fc.end   = -1;
	fc.cont  =  0;
}

void insert (filaCirc &fc, char elem)
{
	if (fc.end == MAX_FILA - 1)
		fc.end = 0;
	else
		fc.end++;
		
	fc.cont++;
	fc.fila[fc.end] = elem;
}

char remove (filaCirc &fc)
{
	char c = fc.fila[fc.start];
	
	if (fc.start == MAX_FILA - 1)
		fc.start = 0;
	else
		fc.start++;
		
	fc.cont--;
	return c;
}

//Conceito de LIFO só para exibição
char LIFOremove (filaCirc &fc)
{
	char c = fc.fila[fc.end];
	
	if (fc.end == 0)
		fc.end = MAX_FILA - 1;
	else
		fc.end--;
	fc.cont--;
	return c;
}

bool isFull (int cont)
{
	return cont == MAX_FILA;
}

bool isEmpty(int cont) 
{
	return cont == 0;	
}

void exibir(filaCirc fc)
{
	while (!isEmpty(fc.cont))
		printf("[%c]", remove(fc));
}

void exibir_LIFO(filaCirc fc)
{
	while (!isEmpty(fc.cont))
		printf("[%c]", LIFOremove(fc));
}


