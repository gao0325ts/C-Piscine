#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int compare(int a, int b)
{
  if (a < b)
      return -1;
  else if (a == b)
      return 0;
  else
      return 1;
}

int main(void)
{
  int tab1[] = {1, 2, 3, 4, 5};
  int tab2[] = {1, 1, 3, 4, 5};
  int tab3[] = {1, 2, 3, 4, 4};
  int tab4[] = {5, 4, 3, 2, 1};
  int tab5[] = {5, 5, 3, 2, 1};
  int tab6[] = {5, 4, 3, 2, 2};
  int tab7[] = {1, 1, 1, 1, 1};
  int tab8[] = {5, 4, 3, 6, 1};

  printf("%d\n", ft_is_sort(tab1, 5, &compare));
  printf("%d\n", ft_is_sort(tab2, 5, &compare));
  printf("%d\n", ft_is_sort(tab3, 5, &compare));
  printf("%d\n", ft_is_sort(tab4, 5, &compare));
  printf("%d\n", ft_is_sort(tab5, 5, &compare));
  printf("%d\n", ft_is_sort(tab6, 5, &compare));
  printf("%d\n", ft_is_sort(tab7, 5, &compare));
  printf("%d\n", ft_is_sort(tab8, 5, &compare));
  return (0);
}
