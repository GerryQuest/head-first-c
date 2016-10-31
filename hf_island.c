#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *name;
  char *opens;
  char *closes;
} island;

void printIslandData (island *island) {
  printf("...\n%s\n%s\n%s\nCompleted.\n",
	 island->name, island->opens, island->closes);
}

int main () {
  puts("Hi...");
  island lost = {"Lost Island", "9:00", "18:00"};
  printIslandData (&lost);
  return 0;
}
