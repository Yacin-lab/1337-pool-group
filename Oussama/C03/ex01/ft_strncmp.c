#include <stdio.h>

int	ft_strncmp(char *s1,char *s2, unsigned int n)
{
	unsigned int	i;
	i = 0;

	if (n == 0)
	{
		return 0;
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}

	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int	main()
{
	int	res;
	char	s1[] = "oussbak";
	char    s2[] = "oussama";

	res = ft_strncmp (s1, s2, 7);

	printf("res is : %d\n", res);

	return (0);
}*/
