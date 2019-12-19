#include <stdio.h>

int
main ()
{
  char name[10];
  puts ("enter your name:");

  scanf ("%[^\n]s", &name);
  
  puts ("your name is:");
  puts (name);
  return 0;
}
