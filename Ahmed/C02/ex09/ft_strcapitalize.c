
#include <unistd.h>

void	ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
}

int	ft_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (i == 0 || ft_is_alphanum(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquAnte+et+un\n";
	ft_strcapitalize(str);
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}
