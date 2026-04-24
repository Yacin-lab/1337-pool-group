#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int	main()
{
	char s1[] = "abcdef";
	char s2[] = "abcd";
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 3));
	return (0);
}
