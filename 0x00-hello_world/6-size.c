#include <stdio.h>

int main(void)
{
  int char_size = sizeof(char);
  int int_size = sizeof(int);
  int long_size = sizeof(long);
  int long_long_size = sizeof(long long);
  int float_size = sizeof(float);
  printf("Size of a char: %d byte(s)\n",char_size);
  printf("Size of an int: %d byte(s)\n",int_size);
  printf("Size of a long int: %d byte(s)\n",long_size);
  printf("Size of a long long int: %d byte(s)\n",long_long_size);
  printf("Size of a float: %d byte(s)\n",float_size);
  return 0;
}
