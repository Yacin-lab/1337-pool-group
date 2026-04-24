#include <unistd.h>


void	ft_ptnbr(int i)
{
	if(i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if(i > 9)
	{
		ft_ptnbr(i / 10);
	}
	char c = i % 10 + 48;
	write(1, &c, 1);
}

void	ft_swap(int* a, int* b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int *start;
	int *end;

	start = tab;
	end = tab + (size - 1);
	while (start < end)
	{
		ft_swap(start , end);
		start++;
		end--;
	}
}
int	main()
{
		int tab[] = {1, 0, 65, -2, 4};
		int i = 0;
		
		ft_rev_int_tab(tab , 5);

		while(i < 5)
		{
			ft_ptnbr(tab[i]);
			i++;

		}
		write(1, "\n", 1);
		return 0;
		
}
