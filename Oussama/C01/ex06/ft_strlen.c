#include <unistd.h>

void	put_nbr(int i)
{
	if(i >= 10)
	{
		i = i / 10;
		put_nbr(i);
	}
	char c = i % 10 + '0';
	write(1, &c, 1);
}

int	ft_strlen(char *str)
	{
		int i;

		i = 0;
		while(str[i] != '\0')
		{
			i++;
		}
		return i;
	}

int	main()
	{
		char *c;
		
		c = "oussbak !";
		put_nbr(ft_strlen(c));
		write(1, "\n",1);
		return 0;
	}
