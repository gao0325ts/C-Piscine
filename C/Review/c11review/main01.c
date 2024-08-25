#include <stdio.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int));

int double_value(int n)
{
  return n * 2;
}

int main(void)
{
  int tab[] = {1, 2, 3, 4, 5};
  int *doubled_values = ft_map(tab, 5, &double_value);
  for (int i = 0; i < 5; i++)
    printf("%d\n", doubled_values[i]);
  free(doubled_values);
  return (0);
}