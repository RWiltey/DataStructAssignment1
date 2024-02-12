#define _CRT_SECURE_NO_WARNINGS
#include "user.h"
#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


int main(int argc, char* argv[]) {
	if (argc != 1) {
		printf("Usage: %s <number_of_nodes>\n", argv[0]);
		return EXIT_FAILURE;
	}
	int numNodes = atoi(argv[1]);
	srand(time(NULL));

	 queue* fifo;
	fifo = (queue*)malloc(sizeof(queue));
	
	InitQueue(fifo);
	fillQueue(fifo, numNodes);
	printHead(fifo);
	printTail(fifo);
	
	return 0;
}