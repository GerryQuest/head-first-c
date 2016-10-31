#include <stdio.h>
#include <stdlib.h>

typedef struct island {
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

void printIslandData (island *island) {
  printf("...\n%s\n%s\n%s\nCompleted.\n",
	 island->name, island->opens, island->closes);
  if (island->next != NULL)
    printf("\nNext: %s\n", island->next->name);
}

int main () {
  puts("Hi...");
  island craggy = {"Craggy island", "08:00", "18:00", NULL};
  island lost = {"Lost Island", "9:00", "18:00", NULL};
  craggy.next = &lost;
  
  printIslandData (&craggy);
  return 0;
}
