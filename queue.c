#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

/* Initialize the queue */
engr120_queue_t queue_init() {
  /* Struct holding start and end of queue */
  engr120_queue_t top;
  /* Beginning element of the queue */
  node_t *node = (node_t *) malloc(sizeof(node_t));
  /* Assigns first number to 0 and points node to NULL */
  node->number = 0;
  node->next = NULL;
  /* Points head and tail to node since there is only one */
  top.head = node;
  top.tail = node;
  /* Return queue struct with head and tail */
  return top;
}

/* remove the "head" of the queue */
int dequeue(engr120_queue_t *q) {
  /* Stores head number to return */
  int temp = q->head->number;
  /* Moves head down one element */
  q->head = q->head->next;
  /* Returns stored number */
  return(temp);
}

/* add an element at the end of the queue */
void enqueue(engr120_queue_t *q, int i) {
  /* new node */
  node_t *node = (node_t *) malloc(sizeof(node_t));
  /* Inserts payload and sets new node to old head */
  node->number = i;
  node->next = q->head;
  /* Points head to beginning of new node */
  q->head = node; 
}

/* Prints out the queue */
void print_queue(engr120_queue_t q) {
  /* Stores head node */
  node_t *temp = q.head;
  printf("TOP: HEAD: ");
  /* Prints each node in queue */
  while(temp->next != NULL)
  {
    printf("%d -> ", temp->number);
    temp = temp->next;
  }
  printf("NULL\n");
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
