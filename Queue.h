#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>
#define MAX_SIZE 100

typedef struct queue {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue *queue);

bool isEmpty(Queue *queue);

bool isFull(Queue *queue);

void enqueue(Queue *queue, int value);

void dequeue(Queue *queue);

int peek(Queue *queue);

void printQueue(Queue *queue);


#endif //QUEUE_H
