#include <stdio.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while(base[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		if (base[i] == ' ' ||(base[i] >= '\t' && base[i] <= '\r'))
		{
			return (0);
		}

		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}

			j++;
		}

		i++;
	}
	if (i < 2)
	{
		return (0);
	}
	return (i);
}

int	get_index(char c, char *base)
{
	int	n;
	
	n = 0;
	while (base[n] != '\0')
	{
		if(base[n] == c)
		{
			return (n);
		}
		n++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int     base_len;
	int	index;
	int	sign;
	int	res;
	int	val;

	base_len = ft_strlen(base);

	if (check_base(base) == 0)
	{
		return (0);
	}

	index = 0;
	while (str[index] == ' ' ||(str[index] >= '\t' && str[index] <= '\r'))
	{
		index++;
	}

	sign = 1;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign = -sign;
		}
		index++;
	}
	
	res = 0;
	while (str[index] != '\0')
	{
		val = get_index(str[index], base);
		if (val == -1)
		{
			break ;
		}
		res = (res * base_len) + val;
		index++;
	}
	return (res * sign);
}

int	main()
{
	int	result;

	result = ft_atoi_base("  \n\t  +--+-101010", "01");
	printf("%d\n", result);
	result = ft_atoi_base("\r  +++--c7", "0123456789abcdef");
	printf("%d\n", result);
	return (0);
}
