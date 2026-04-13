#include <unistd.h>

void	ft_print_hex(int i)
{
	char	*base = "0123456789abcdef";
	if (i > 0)
	{
		ft_print_hex(i / 16);
	}
	write (1, &base[i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write (1, str, 1);
		}
		else
		{
			write (1, "\\", 1);
			ft_print_hex((int)*str);
		}
		str++;
	}
}

int	main()
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	write (1, "\n", 1);
	return (0);
}
