#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int length, int(*f)(char *));

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
    int length = argc - 1;
    int count = ft_count_if(strings, length, &is_not_empty);
    printf("%d\n", count);
    return 0;
  }
}
