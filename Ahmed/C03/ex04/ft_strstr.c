#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	t = 0;
	int	i = 0;
	int	j = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char str[] = "0123456789";
	char to_find[] = "3456";
	char *s = ft_strstr(str, to_find);
	if (s == NULL)
	{
		write (1, "NULL\n", 5);
	}
	else
	{
		int i = 0;
		while (s[i])
		{
			write (1, &s[i], 1);
			i++;
		}
	}
	return (0);
}
