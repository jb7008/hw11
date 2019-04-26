#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* Initialize the queue */
engr120_stack_t init() {
  return queue_init();
}

/* Print the whole queue */
void show(engr120_stack_t s) {
  print_queue(s);
}

/* Removes node from queue and returns it */
int pop(engr120_stack_t *s) {
  return dequeue(s);
}

/* Adds node to qeue */
void push(engr120_stack_t *s, int i) {
  enqueue(s, i);
}
