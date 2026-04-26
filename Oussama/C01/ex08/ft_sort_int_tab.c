#include <unistd.h>


void    ft_ptnbr(int i)
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

void    ft_swap(int* a, int* b)
{
        int swap;
        swap = *a;
        *a = *b;
        *b = swap;
}

void    ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swapped;

	swapped = 1;
	while(swapped)
	{
		i = 0;
		swapped = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				ft_swap(tab + i, tab + i + 1);
				swapped = 1;
			}
			i++;
		}
	}
}
int     main()
{
	int tab[] = {1, 0, 65, -2, 4, 1};
	int i;
	
	ft_sort_int_tab(tab , 6);
	i = 0;
	while(i < 5)
        {
		ft_ptnbr(tab[i]);
		i++;

        }
        write(1, "\n",1);
	return 0;
}
