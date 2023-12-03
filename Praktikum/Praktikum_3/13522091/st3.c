#include <stdio.h>

/* Placeholder macro values, actual values might differ */
#define RANDOM_BUFFER_SIZE 0

void win() {
  puts("This is the local flag for the 3rd casual challenge, try sending the same payload to the server!");
}

void vuln() {
  char buffer[RANDOM_BUFFER_SIZE] = { 0 };

  printf("Enter your payload: "); gets(buffer);

  puts("Lets test your payload!");
}

int main() {
  puts("Welcome to MaiPwn casual level 3\n");
  puts("You are tasked to perform a buffer overflow to return to the function win()");
  puts("\n==================================================\n");

  vuln();
  
  return 0;
}
