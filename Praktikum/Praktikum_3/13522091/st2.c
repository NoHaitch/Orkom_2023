#include <stdio.h>

/* Placeholder macro values, actual values might differ */
#define RANDOM_INIT_VALUE 1
#define RANDOM_TARGET_VALUE 0
#define RANDOM_BUFFER_SIZE 0

void vuln() {
  int target = RANDOM_INIT_VALUE;
  printf("Value of target: %d\n", target);
  
  char buffer[RANDOM_BUFFER_SIZE] = { 0 };
  printf("Enter your payload: "); gets(buffer);

  printf("Overwritten target value: %d\n", target);

  if (target == RANDOM_TARGET_VALUE) {
    puts("This is the local flag for the 2nd casual challenge, try sending the same payload to the server!");
  }
}

int main() {
  puts("Welcome to MaiPwn casual level 2\n");
  puts("You are tasked to perform a buffer overflow to overwrite the value of a variable to an exact value");
  puts("\n==================================================\n");

  vuln();
  
  return 0;
}
