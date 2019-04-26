#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* Initialize the stack */
engr120_stack_t init() {
  /* Pointer to first node */
  engr120_stack_t top = (engr120_stack_t) malloc(sizeof(engr120_stack_t));;
  /* Initializes elements to NULL */
  top->number = 0;
  top->next = NULL;
  return top;
}

/* Print the whole stack */
void show(engr120_stack_t s) {
  /* Pointer to hold head */
  engr120_stack_t temp = (engr120_stack_t) malloc(sizeof(engr120_stack_t));
  /* Assign temp to head */
  temp = s;
  printf("TOP: ");
  /* Print temp which progresses through stack */
  while(temp->next != NULL)
  {
    printf("%d -> ", temp->number);
    temp = temp->next;
  }
  printf("NULL\n");
}

/* Removes node from stack and returns it */
int pop(engr120_stack_t *s) {
  /* Gets payload from first node */
  int temp = (*s)->number;
  /* Removes first node */
  *s = (*s)->next;
  /* Returns payload */
  return(temp);
}

/* Adds node to stack; Note: *s is a double pointer */
void push(engr120_stack_t *s, int c) {
  /* holds new element */
  engr120_stack_t temp = (engr120_stack_t) malloc(sizeof(engr120_stack_t));
  /* Head element */
  engr120_stack_t head = (engr120_stack_t) malloc(sizeof(engr120_stack_t));

  /* Assigns head to first element */
  head = *s;
  /* Assigns payload */
  temp->number = c;
  /* Points new element at head */
  temp->next = head;
  /* Assigns LL pointer to new element */
  *s = temp;
}

/* Returns 1 if stack is empty, 0 if not */
int is_empty(engr120_stack_t s) {
  /* Checks if first element is EOL */
  if(s->next == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
