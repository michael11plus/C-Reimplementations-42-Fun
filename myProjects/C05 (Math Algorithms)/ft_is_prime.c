#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
