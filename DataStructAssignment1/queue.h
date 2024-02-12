#pragma once
#define MAXNAME 10


struct queue {
	struct Node* pHead;
	struct Node* pTail;
};

struct user {
	char name[MAXNAME];
	int level;
	char team[MAXNAME];
};

struct Node {
	 struct user data;
	struct Node* next;
};

void InitQueue(struct queue* );
int IsQueueEmpty(struct queue*);
void AddToQueue(struct queue*, struct Node*);
struct Node* DeQueue(struct queue*);

void traverse(struct Node* ptr);

void printHead(struct queue*);
void printTail(struct queue*);

// creating a node within a function
struct Node* CreateNode();