#include "coada.h"
Queue* createQueue()
{
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL)
        return NULL;
	q->frt=q->rear=NULL;
	return q;
}

void enQueue(Queue *q, Dat v)
{
	Nod* newNode=(Nod*)malloc(sizeof(Nod));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode;
	else
    {
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->frt==NULL) q->frt=q->rear;
}

Dat deQueue(Queue *q)
{
	Nod* aux; Dat d;
	if (isEmpty(q))
        return INT_MIN;
	aux=q->frt;
	d=aux->val;
	q->frt=(q->frt)->next;
	free(aux);
	return d;
}

int isEmptyi(Queue *q)
{
	return (q->frt==NULL);
}

void deleteQueue(Queue *q)
{
	Nod* aux;
	while (!isEmpty(q))
    {
		aux=q->frt;
		q->frt=q->frt->next;
		free(aux);
	}
	free(q);
}
