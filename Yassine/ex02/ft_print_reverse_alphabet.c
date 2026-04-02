#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 'z';	// 'z' = 122 (integer) in ascii table
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}

}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
