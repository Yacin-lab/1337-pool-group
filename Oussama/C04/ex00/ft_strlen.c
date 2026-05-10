#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}


int	main()
{
	int len;
	char	str[] = "oussbak";

	len = ft_strlen(str);
	printf("strlen : %d\n", len);
	return 0;
}
