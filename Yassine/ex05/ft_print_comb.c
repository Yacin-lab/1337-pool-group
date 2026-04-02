#include <unistd.h>

void    ft_putchar(int c)
{
        write(1, &c, 1);
}

void ft_print_comb(void) {
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				
				if (j == '8' && k == '9') 
				{
					break;
				}
				ft_putchar(',');
                                ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return (0);
}
