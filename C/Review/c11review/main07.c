#include <stdio.h>
#include <string.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int compare(char *a, char *b)
{
    return strcmp(a, b);
}

int main(void)
{
  int i;
  i = 0;
  char *strings[] = {"banana", "apple", "grape", "orange", NULL};
  ft_advanced_sort_string_tab(strings, compare);
  while (strings[i] != NULL)
    printf("%s\n", strings[i++]);
  return (0);
}
