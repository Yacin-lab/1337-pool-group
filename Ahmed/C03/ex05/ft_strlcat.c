#include <stdio.h>

int	ft_strlcat(char *dest, char *src, int size)
{
	int	d_len;
	int	s_len;
	int	i;

	s_len = 0;
	d_len = 0;
	i = 0;
	while (src[s_len])
	{
		s_len++;
	}
	while (d_len < size && dest[d_len])
        {
                d_len++;
        }
	while (src[i] && d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < size)
	{
		dest[d_len + i] = '\0';
	}
	return (s_len + size);
}

int	main()
{
	char str[] = "456 789 123"; 
	char dest[10] = "123 ";
	ft_strlcat(dest, str, 10);
	printf ("return : %d\n", ft_strlcat(dest, str, 10));
	printf ("dest : %s", dest);
	return (0);
}
