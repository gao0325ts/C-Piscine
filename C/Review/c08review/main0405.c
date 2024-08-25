#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str *strs;

	if (argc > 1)
	{
		strs = ft_strs_to_tab(argc - 1, argv + 1);
		if (strs != NULL)
		{
			ft_show_tab(strs);

			int i = 0;
			while (i < argc - 1)
			{
				free(strs[i].copy);
				i++;
			}
			free(strs);
		}
		return (0);
	}
}