#include <util.h>

int	base_get(int c)
{
	if (c >= 0x30 && c <= 0x39)
		return (c - 0x30);
	if (c >= 0x41 && c <= 0x46)
		return (c - 0x41 + 10);
	if (c >= 0x61 && c <= 0x66)
		return (c - 0x61 + 10);
	return (0);
}

long	atolu_base(char *str, int base)
{
	long	number;
	char	*upd;

	number = 0;
	upd = str;
	while (*upd)
	{
		number *= base;
		number += base_get(*upd);
		upd++;
	}
	return (number);
}
