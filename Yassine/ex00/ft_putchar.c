#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

/*int main()
{
	ft_putchar('a');

	return(0);
}*/
