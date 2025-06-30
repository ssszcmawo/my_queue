#include "Queue.h"

void initQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = 0;
};

bool isEmpty(Queue *q) {
    return q->front == q->rear == -1;
}

bool isFull(Queue *q) {
    return q->rear == MAX_SIZE;
}

void enqueue(Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full!\n");
    }

    q->data[q->rear] = data;
    q->rear++;
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    }

    q->front++;
}

int peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    }
    return q->data[q->front + 1];
}

void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    }

    for (int i = q->front + 1; i < q->rear; i++) {
        printf("%d ", q->data[i]);
    }
    printf("\n");
}
