#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned len;
	unsigned i;

	len = 0;
	while(src[len] != '\0')
	{
		len++;
	}
	if(size == 0)
	{
		return len;
	}
	i = 0;
	while(i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return len;
}

int	main()
{
	char src[] = "oussbak";
	char dest[5];
	
	printf("%u\n", ft_strlcpy(dest , src, 5));
	return 0;
}
