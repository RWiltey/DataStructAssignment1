#pragma once
#define MAXNAME 10


typedef struct queue {
	struct Node* pHead;
	struct Node* pTail;
}queue;

struct user {
	char name[MAXNAME];
	int level;
	char team[MAXNAME];
};

typedef struct Node {
	 struct user data;
	struct Node* next;
}Node;

void InitQueue( queue* );
int IsQueueEmpty( queue*);
void AddToQueue( queue*, Node*);
struct Node* DeQueue( queue*);

void traverse( Node* ptr);

void printHead( queue*);
void printTail( queue*);

// creating a node within a function
struct Node* CreateNode();

// Adding it all together to fill a function with randomly generatted users

int fillQueue(queue*, int );

void displayQueue(queue*);