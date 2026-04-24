#include <unistd.h>

// print address

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

// print hex

void	ft_char_hex(int x)
{
	char hex[] = "0123456789abcdef";
	write (1, &hex[x / 16], 1);
	write (1, &hex[x % 16], 1);
}

void	ft_print_hex(char *str, unsigned int size)
{
	unsigned int i = 0;
	int	temp = 1;
	while (i < 16)
	{
		if (i < size)
		{
			ft_char_hex((int)str[i]);
		}
		else
		{
			write (1, "  ", 2);
		}
		if (temp == 2)
                {
                        write (1, " ", 1);
                        temp = 0;
                }
		temp++;
		i++;
	}
}

// print string

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

// print_memory

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
	char str2[14] = "01234567891234";
	char str3[16] = "ches...c. est fo";
	char str4[16] = "peut faire avec.";
	char str5[16] = "..print_memory.";
	char str6[13] = "..lol\nlol. .";

	ft_print_memory(str, sizeof(str));
	ft_print_memory(str2, sizeof(str2));
	ft_print_memory(str3, sizeof(str3));
	ft_print_memory(str4, sizeof(str4));
	ft_print_memory(str5, sizeof(str5));
	ft_print_memory(str6, sizeof(str6));
	return (0);
}
