#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;

	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;

		while (str[i +  j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return NULL;
}


int	main()
{
	char	str[] = "abcdef";
	char	to_find[] = "k";

	char *res = ft_strstr(str, to_find);
	
	if (res == NULL)
	printf("not find !\n");
	else
	printf("%s\n", res);

	return 0;
}
