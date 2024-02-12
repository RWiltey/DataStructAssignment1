#define _CRT_SECURE_NO_WARNINGS
#include "user.h"
#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


int main(void) {
	srand(time(NULL));

	struct queue* fifo;
	fifo = (struct queue*)malloc(sizeof(struct queue));
	struct Node* first;
	first = (struct Node*)malloc(sizeof(struct Node)); //allocating memory to first node
	if (first == NULL)
	{
		printf("\n Memory not available");
		return 1;
	}
	first->data.level = 5;
	strncpy(first->data.name, "ryan", 10);
	strncpy(first->data.team, "red", 10);

	first->next = NULL;
	struct Node* second = CreateNode();
	

	struct Node* third = CreateNode();
	
	InitQueue(fifo);
	IsQueueEmpty(fifo);

	AddToQueue(fifo, first);
	printTail(fifo);
	AddToQueue(fifo,second);
	printTail(fifo);
	AddToQueue(fifo,third);
	printTail(fifo);
	printHead(fifo);


	struct Node* dequeued = DeQueue(fifo);
	traverse(dequeued);
	printHead(fifo);

	struct Node* secondd = DeQueue(fifo);
	traverse(secondd);

	struct Node* thirdd = DeQueue(fifo);
	traverse(thirdd);

	DeQueue(fifo);
	IsQueueEmpty(fifo);

	return 0;
}