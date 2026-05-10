#include <unistd.h>


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
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

		j = i + 1;
		while (base[j] != '\0')
		{
			if(base[i] == base[j])
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



void	ft_put_recursive(long int n, int size, char *base)
{
	if(n >= size)
        {
                ft_put_recursive(n / size, size, base);
        }
	write(1, &base[n % size], 1);
}



void	ft_putnbr_base(int nbr, char *base)
{
	long int	num = nbr;
	int	base_len;

	base_len = ft_strlen(base);

	if(check_base(base) == 0)
	{
		return;
	}
	if(num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	ft_put_recursive(num , base_len, base);
}



int	main()
{
	int	nbr;
	nbr = 0;

	ft_putnbr_base(nbr, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "01");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "poneyvif");
	write(1, "\n", 1);

	return (0);
}
