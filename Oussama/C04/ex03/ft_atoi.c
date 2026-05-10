#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while (str[i] == ' ' ||(str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}

	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}

	return (sign * res);
}

int	main()
{
	char	str[] = " \n +---+1337ooo0101";

	int n = ft_atoi(str);

	printf("%d\n", n);
	return 0;
}
