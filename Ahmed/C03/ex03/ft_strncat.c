#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;
	unsigned int	i;

	start = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}

int     main()
{
        unsigned int     i = 0;
        char dest[10] = "abc";
        char src[] = "def12345";
        ft_strncat(dest, src, 4);
        while (dest[i])
        {
                write (1, &dest[i], 1);
                i++;
        }
        return (0);
}
