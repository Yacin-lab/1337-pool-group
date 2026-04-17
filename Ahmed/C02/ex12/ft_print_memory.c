#include <unistd.h>

void	ft_print_add(unsigned long x)
{
	char hex[] = "0123456789abcdef";
	char add[16];
	int i = 15;
	while (x > 0)
	{
		add[i] = hex[x % 16];
		x = x / 16;
		i--;
	}
	while (i > -1)
	{
		add[i] = '0';
		i--;
	}
	write (1, add, 16);
	write (1, ": ", 2);
}

void	ft_char_hex(int x)
{
	char hex[] = "0123456789abcdef";
	if (x > 16)
	{
		ft_char_hex(x / 16);
	}
	write (1, &hex[x % 16], 1);
}

void	ft_print_hex(char *str, unsigned int size)
{
	unsigned int i = 0;
	int	temp = 0;
	while (i < size && i < 16)
	{
		ft_char_hex((int)str[i]);
		temp++;
		if (temp == 2)
		{
			write (1, " ", 1);
			temp = 0;
		}
		i++;
	}
	write (1, " ", 1);
}
void    ft_print_text(char *str, unsigned int size)
{
	unsigned int i = 0;
	while (i < 16 && i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, ".", 1);
		}
		i++;
	}
	write (1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *ptr = (unsigned char *)addr;
	unsigned int i = 0;
	while (i < size)
	{
		ft_print_add((unsigned long)(ptr + i));
		ft_print_hex(&ptr[i], size - i);
		ft_print_text(&ptr[i], size - i);
		i += 16;
	}
	return (addr);
}

int	main()
{
	char str[16] = "Bonjour les amin";
	char str2[16] = "ches\n\nest fo\n\n\n";
	ft_print_memory(str, sizeof(str));
	ft_print_memory(str2, sizeof(str2));
	return (0);
}
