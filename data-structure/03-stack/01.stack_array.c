#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4

int stack_arr[MAX_SIZE];
int top = -1;

int isEmpty() { return top == -1; }
int isFull() { return top == MAX_SIZE - 1; }

void push(int value) {
  if (isFull()) {
    printf("Stack Overflow");
    return;
  }

  top++;
  stack_arr[top] = value;
}

int peek() {
  if (isEmpty()) {
    printf("Stack Underflow");
    return -1;
  }

  return stack_arr[top];
}

int pop() {
  if (isEmpty()) {
    printf("Stack Underflow");
    return -1;
  }

  return stack_arr[top--];
}

void printStack() {
  for (int i = 0; i <= top; i++) {
    printf("%d -> ", stack_arr[i]);
  }
}

int main() {
  push(1);
  push(5);
  printf("top element %d \n", peek());
  printf("popped %d \n", pop());

  printStack();

  return 0;
}