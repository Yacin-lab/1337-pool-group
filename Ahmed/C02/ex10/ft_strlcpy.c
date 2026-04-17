#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	while (src[len])
	{
		len++;
	}
	i = 0;
	if (size == 0)
	{
		return (len);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	main()
{
	char src[] = "123456789";
	char dest[4];
	ft_strlcpy(dest, src, 4);
	write (1, dest, 4);
	return (0);
}
