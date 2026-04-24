#include <unistd.h>

void    ft_putnbr(int *tab,int n)
{
        int i;
        char c;

        i = 0;
	while(i < n)
        {
                c = tab[i] + '0';
                write(1, &c, 1);
                i++;

        }
        if (tab[0] != 10 - n)
        {
                write (1, ", ", 2);
        }
}

void	ft_solve(int *tab, int n, int index)
{
	int start;

	if (index == n)
	{
	       	ft_putnbr(tab, n);
		return;
	}
	
	if (index == 0)
	{
		start = 0;
	}
	else
	{
		start = tab[index - 1] + 1;
	}
	while (start < 10)
	{
		tab[index] = start;
		ft_solve(tab, n, index + 1);
		start++;
	}
}

void    ft_print_combn(int n)
{
        int tab[10];

        if(n > 0 && n < 10)
        {
                ft_solve(tab, n , 0);
        }

}

int     main()
{
        ft_print_combn(1);
        write(1, "\n", 1);
        return 0;
}
