#include <stdio.h>

/* Placeholder macro values, actual values might differ */
#define RANDOM_TARGET_VALUE_1 0
#define RANDOM_TARGET_VALUE_2 0
#define RANDOM_BUFFER_SIZE 0

int global = 0;

void gadget_one() {
  /* gadget_one */
}

void gadget_two() {
  /* gadget_two */
}

void win(int a, int b) {
  if (a == RANDOM_TARGET_VALUE_1 && b == RANDOM_TARGET_VALUE_2 && global == 1) {
    puts("This is the local flag for the 5th casual challenge, try sending the same payload to the server!");
  }
}

void jump() {
  /* OwO what's this? */
}

void vuln() {
  char buffer[RANDOM_BUFFER_SIZE] = { 0 };

  printf("Enter your payload: "); gets(buffer);

  puts("Lets test your payload!");
}

int main() {
  puts("Welcome to MaiPwn casual level 5\n");
  puts("You are tasked to perform a buffer overflow to return to the function jump() then win(int a, int b)");
  puts("\n==================================================\n");

  vuln();
  
  return 0;
}
