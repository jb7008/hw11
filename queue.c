#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

engr120_queue_t queue_init() {
}

int dequeue(engr120_queue_t *q) {
}

void enqueue(engr120_queue_t *q, int i) {
}

int is_empty_queue(engr120_queue_t q) {
}

void print_queue(engr120_queue_t q) {
}

/* You can use this main as a test.
 * gcc -o queue queue.o ll.o
 */

/*
int main(void) {
  engr120_queue_t q = queue_init();
  engr120_queue_t *queue = &q;

  enqueue(queue, 1);
  print_queue(*queue);
  enqueue(queue, 2);
  print_queue(*queue);
  enqueue(queue, 3);
  print_queue(*queue);
  enqueue(queue, 4);
  print_queue(*queue);

  int d1 = dequeue(queue);
  print_queue(*queue);

  return (0);
}
*/
