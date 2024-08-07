#include <unistd.h>
#include "header.h"

extern int grid[4][4];

int	ft_check_sums_rows(void)
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	while (i < 4)
	{
		sum = 0;
		j = 0;
		while (j < 4)
		{
			sum += grid[i][j];
			j++;
		}
		if (sum != 10)
		{
			write(1, "ERROR : row value is not 10\n", 28);
			return (1);
		}
		i++;
	}
}

int	ft_check_sums_cols(void)
{
	int	i;
	int	j;
	int	sum;

	j = 0;
	while (j < 4)
	{
		sum = 0;
		i = 0;
		while (i < 4)
		{
			sum += grid[i][j];
			i++;
		}
		if (sum != 10)
		{
			write(1, "ERROR : col value is not 10\n", 28);
			return (1);
		}
		j++;
	}
}

int	ft_check_sums(void)
{
	ft_check_sums_rows();
	ft_check_sums_cols();
	return (0);
}
