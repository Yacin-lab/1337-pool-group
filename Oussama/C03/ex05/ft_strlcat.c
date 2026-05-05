#include <stdio.h>

int	strlen(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	src_len = strlen(src);
	dest_len = strlen(dest);

	if (size <= dest_len)
	{
		return (size + src_len);
	}

	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}

int	main()
{
	unsigned int res;
	char	src[] = "bak";
	char	dest[20] = "ouss";

	res = ft_strlcat(dest, src, 10);
	printf("%d\n", res);
	return 0;
}
