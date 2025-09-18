#include <stdio.h>

#define MAX_SIZE 2

int queue_items[MAX_SIZE];
int front = -1;
int rear = -1;

int isEmpty() { return front == -1; }

int isFull() { return rear == MAX_SIZE - 1; }

void enqueue(int data) {
  if (isFull()) {
    printf("Queue is Full!\n");
    return;
  }

  if (front == -1) {
    front = rear = 0;
  } else {
    rear++;
  }
  queue_items[rear] = data;
}

int dequeue() {
  int result = -1;
  if (isEmpty()) {
    printf("Queue is Empty!\n");
  }

  if (front == rear) {
    result = queue_items[front];
    front = rear = -1;
  } else {
    result = queue_items[front];
    front++;
  }
  return result;
}

int main() {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(5);

  while (!isEmpty()) {
    printf("%d \n", dequeue());
  }

  return 0;
}
