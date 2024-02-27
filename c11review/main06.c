#include <stdio.h>

void  ft_sort_string_tab(char **tab);

int main(void)
{
  char *tab[] = {"banana", "apple", "grape", "orange", "kiwi", NULL};
  ft_sort_string_tab(tab);
  for (int i = 0; tab[i] != NULL; i++)
    printf("%s\n", tab[i]);
  return 0;
}