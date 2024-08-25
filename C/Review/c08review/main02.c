#include "ft_abs.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc == 2)
    printf("%d\n", ABS(atoi(argv[1])));
  return(0);
}