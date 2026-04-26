#include <unistd.h>


void ft_print(int a)
{
	char dive = (a / 10) + '0';
	char mod = (a % 10) + '0';
	write(1, &dive, 1);
	write(1, &mod, 1);
	if( a != 98)
        {
        	 write(1, ", ", 2);
        }
}


void	ft_print_comb2()
{
	int	a;
	int	b;

	a = 0;
	b = 0;

	while(a <= 98)
	{
		b = a + 1;

		while(b <= 99)
		{
			ft_print(a);
			write(1, " ", 1);
			ft_print(b);

			b++;
		}
		a++;
	}
}
