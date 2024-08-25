#include <stdio.h>

int ft_any(char **tab, int(*f)(char *));

int is_not_empty(char *str)
{
  return *str != '\0';
}

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Please put string1 string2 ... stringN\n");
    return (0);
  }
  else
  {
    char **strings = argv + 1;
    int result = ft_any(strings, &is_not_empty);
    printf("%d\n", result);
    return(0);
  }
}