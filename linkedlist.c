#include <stdlib.h>
#include <stdio.h>

typedef struct node {
  int value;
  struct node *next;
} node;

struct node *add_to_list (struct node *list, int n) {
  struct node *new_node; // remember pointer holds memory address

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in the add_to_list\n");
    exit(EXIT_FAILURE);
  }
  
  new_node->value = n;
  new_node->next = list;
  return new_node;
}

struct node *search_list (struct node *list, int n) {
  for (; list != NULL; list = list->next) {
    if (list->value == n) {
      return list;
    }
  }
  return NULL;
}

int main () {
  struct node *first = NULL;
  struct node *query;
  first = add_to_list (first, 10); // Stores new_node memory address
  printf("first 1: %p\n", first);
  first = add_to_list (first, 20);
  printf("first 2: %p\n", first);
  first = add_to_list (first, 30);
  printf("First node has the value: %i\n", first->value);

  if (search_list (first, 10) != NULL) {
    printf("10 was found.\n");
  }
  
  return 0;
}
