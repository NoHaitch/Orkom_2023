#include <stdio.h>

/* Placeholder macro values, actual values might differ */
#define RANDOM_TARGET_VALUE 0
#define RANDOM_BUFFER_SIZE 0

void vuln() {
  int target = RANDOM_TARGET_VALUE;
  printf("Value of target: %d\n", target);
  
  char buffer[RANDOM_BUFFER_SIZE] = { 0 };
  printf("Enter your payload: "); gets(buffer);

  printf("Overwritten target value: %d\n", target);

  if (target != RANDOM_TARGET_VALUE) {
    puts("This is the local flag for the 1st casual challenge, try sending the same payload to the server!");
  }
}

int main() {
  puts("Welcome to MaiPwn casual level 1\n");
  puts("You are tasked to perform a buffer overflow to overwrite the value of a variable");
  puts("\n==================================================\n");

  vuln();
  
  return 0;
}
