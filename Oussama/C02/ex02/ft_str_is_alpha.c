#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else 
			return 0;
	}
	return 1;
}

int main()
{
	printf("%d\n", ft_str_is_alpha(""));

	return 0;
}
