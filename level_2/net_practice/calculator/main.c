#include <util.h>
#include <stdio.h>

int	main(int c, char **v)
{
	int	range;
	int	max;
	int	i;

	if (c > 1)
	{
		range = 256 - atolu_base(*(v + 1), 10);
		max = (256 / range);
		i = -1;
		while (++i < max)
		{
			printf("%i - %i\n", (i * range) + 1, (i * range) + range);
		}
	}
	return (0);
}
