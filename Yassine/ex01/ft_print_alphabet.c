#include <unistd.h>

void ft_print_alphabet(void)
{
	int letter;

	letter = 'a';	// 'a' = 97 in ascii table
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main()
{
	ft_print_alphabet();
	return(0);
}
