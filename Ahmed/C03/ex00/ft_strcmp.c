#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main()
{
	char s1[] = "abc5";
	char s2[] = "abc1";
	printf("strcmp : %d\n", strcmp(s1, s2));
	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	return (0);
}
