#include <unistd.h>

void ft_print_numbers(void)
{
	char start;
	char end;
	


	start = '0';
	end = '9';
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
