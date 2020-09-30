#define MAX_QUEUE 6

struct item
{
	char item;
	int priority;
};


struct priorityCircularQueueType
{
	int front;
	int rear;
	int size;
	item queue[MAX_QUEUE];
};

void constructor (priorityCircularQueueType &q)
{
	q.front = 0;
	q.rear = -1;
	q.size = 0;
}


void enQueue (priorityCircularQueueType &q, item elem)
{
	item aux;
	
	int i;
	int j;
	int testLimit = q.size;
	// testLimit recebe a quantidade de elementos antes de q.size incrementar
	
	/*if (q.rear == MAX_QUEUE - 1) {
		
		q.rear = 0;
		i = q.rear;
		j = MAX_QUEUE - 1;
		
	} else {
		
		q.rear++;
		i = q.rear;
		j = q.rear - 1;
	}*/
	
	q.rear = (q.rear == MAX_QUEUE - 1) ? 0 : q.rear + 1;
	i = q.rear;
	j = (!i) ? MAX_QUEUE - 1 : q.rear - 1;
	//j = (!q.rear) ? MAX_QUEUE - 1 : q.rear - 1; //Mesmo resultado da linha acima
	
	q.queue[q.rear] = elem;
	
	while (testLimit /*> 0*/ && q.queue[i].priority < q.queue[j].priority) {
		
		aux = q.queue[i];
		q.queue[i] = q.queue[j];
		q.queue[j] = aux;
		
		i = j--;
		//j--;
		testLimit--;
		
		//j = (i == 0) ? MAX_QUEUE - 1 : j;
		j = (!i) ? MAX_QUEUE - 1 : j;
	}
	q.size++;
}

item deQueue (priorityCircularQueueType &q)
{
	item aux = q.queue[q.front];
	
	/*if (q.front == MAX_QUEUE - 1) 
		q.front = 0;
	else
		q.front++;*/
	q.front = (q.front == MAX_QUEUE - 1) ? 0 : q.front + 1;
	q.size--;
	
	return aux;
}

item getFront (priorityCircularQueueType q) //Testar
{
	return q.queue[q.front];
}

item getRear (priorityCircularQueueType &q) //Testar
{
	return q.queue[q.rear];
}

bool isFull (int counter) //Testar
{
	return counter == MAX_QUEUE;
}

bool isEmpty (int counter)
{
	return counter == 0;
}


void displayQueue (priorityCircularQueueType q)
{
	item aux;
	int i = 1;
	while (!isEmpty(q.size)) {
		
		aux = deQueue(q);
		printf("\n%d Element: [%c] | Priority: %d", i++, aux.item, aux.priority);
	}
}
