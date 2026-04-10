
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
			}
		}
		str++;
	}
	return (1);
}
