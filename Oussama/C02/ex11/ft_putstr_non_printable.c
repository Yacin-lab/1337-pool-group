#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char c;
	char hex[] = "0123456789abcdef";
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			c = (unsigned char) str[i];
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		i++;
	}
}

int	main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return 0;
}

