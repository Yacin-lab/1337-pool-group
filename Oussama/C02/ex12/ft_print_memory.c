#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c , 1);
}



void	ft_print_adr(unsigned long n)
{
	char	*hexa = "0123456789abcdef";
	char	adrhexa[16];
	int	i;
	int	j;

	i = 15;
	j = 0;

	while (i >= 0)
	{
		adrhexa[i] = hexa[n % 16];
		n = n / 16;
		i--;
	}
	while (j < 16)
	{
		ft_putchar(adrhexa[j]);
		j++;
	}
	ft_putchar(':');
	ft_putchar(' ');
}



void	ft_print_hexa(unsigned char *s, int size, int i)
{
	char	*hex = "0123456789abcdef";
	int	j;

	j = 0;
	
	while (j < 16)
	{
		if (i + j < size)
		{
			ft_putchar(hex[s[i + j] / 16]);
			ft_putchar(hex[s[i + j] % 16]);

		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (j % 2 == 1)
		{
			ft_putchar(' ');
		}

		j++;
	}
}


void    ft_print_str(unsigned char *s, int size, int i)
{
	int	j;

	j = 0;

	while (j < 16)
	{
		if (i + j < size)
		{
			if (s[i + j] >= ' ' && s[i + j] <= '~')
			{
				ft_putchar(s[i + j]);
			}
			else
			{
				ft_putchar('.');
			}
		}

		j++;
	}
}



void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*s;
	int	i;

	s = (unsigned char *) addr;
	i = 0;

	while (i < size)
	{
		ft_print_adr((unsigned long)(s + i));
		ft_print_hexa(s, size, i);
		ft_print_str(s, size, i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}



int	main()
{
	char	s[] = "Bonjour les aminches\t\n\tc."
	       	"ce 8,7 qu'on peut faire"
	       	"avec\t\n\t\tprint_memory"
		"\n\n\nlol.lol. .";

	ft_print_memory(s, sizeof(s));

	return (0);
}
