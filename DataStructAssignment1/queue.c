#define _CRT_SECURE_NO_WARNINGS
#include "queue.h"
#include "user.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//static struct Node* pHead, * pTail;
void InitQueue( queue* fifo) {
	fifo->pHead = NULL;
	fifo->pTail = NULL;
}
// Returns non-zero iff queue is empty.
int IsQueueEmpty(struct queue* fifo) {
	if (fifo->pHead == NULL) {
		printf("empteyr");
		return 1;
	}
}

void AddToQueue( queue* fifo,  Node* ptr) {
	if (fifo->pHead == NULL) {
		fifo->pHead = fifo->pTail = ptr; // First item 'head'
	}
	else {
		fifo->pTail->next = ptr; // Add after last
	}
	ptr->next = NULL; // Last item pts to NULL
	fifo->pTail = ptr; // Make this last input
}
 Node* DeQueue( queue* fifo){
	 Node* pTemp;
	if (fifo->pHead == NULL) {
		printf("nothing here\n");
		return(NULL);
	}// If empty
	pTemp = fifo->pHead; // Going to Pop from 'head'
	fifo->pHead = fifo->pHead->next; // Make next item new'head'
		return(pTemp); // Return old 'head'
}
void displayNode( Node* ptr) {
	printf("POPPED NODE: level is:%d, name is: %s, team is:%s\n", ptr->data.level, ptr->data.name, ptr->data.team);
	//ptr = ptr->next; //moving to next node
}

void printHead( queue* fifo) {
	printf("HEAD: level is:%d, name is: %s, team is:%s\n", fifo->pHead->data.level, fifo->pHead->data.name, fifo->pHead->data.team);
}

void printTail( queue* fifo) {
	printf("TAIL: level is:%d, name is: %s, team is:%s\n", fifo->pTail->data.level, fifo->pTail->data.name, fifo->pTail->data.team);
}

Node* CreateNode() {
	// this will create a node with a random user
	 Node* newNode;
	newNode = (Node*)malloc(sizeof( Node));

	char randName[11];
	createRandomName(randName, 10);

	char teamName[10];
	chooseRandTeam(teamName);

	int randLevel;
	randLevel = (rand() % (60 - 1 + 1) + 1);

	newNode->data.level = randLevel;
	strncpy(newNode->data.name, randName, 10);
	strncpy(newNode->data.team, teamName, 10);

	newNode->next = NULL;
	return newNode;

}

int fillQueue(queue* fifo, int numOfUsers) {
	int numNodes = numOfUsers;
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("cant allocate memory");
		return 1;
	}
	while (numNodes >= 0) {
		newNode = CreateNode();
		AddToQueue(fifo, newNode);
		numNodes--;
	}
	return 0;
}


