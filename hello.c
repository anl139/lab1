#include <stdio.h>
#include <helper.h>
int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };
  char string[] = "Bags";
  puts(string);
  puts(hello);
  puts(hello2);
  printf(sums());
  return 0;
}
