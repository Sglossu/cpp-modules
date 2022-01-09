#include "phonebook.hpp"

int	number(std::string str, int i, long int nb, int minus)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb * minus > 2147483647)
			return (-1);
		if (nb * minus < -2147483648)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_atoi(std::string str)
{
	int			i;
	int			minus;
	int			nb;

	i = 0;
	minus = 1;
	nb = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == ' ')
		i++;
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i++] == 45)
			minus = -1;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		nb = number((std::string)str, i, nb, minus);
		if (nb == -1)
			return (-1);
		if (nb == 0)
			return (0);
	}
	return ((int)nb * minus);
}