#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

int	main()
{
	int	i = 0;
	char dest[10] = "abc";
	char src[] = "def";
	ft_strcat(dest, src);
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	return (0);
}
