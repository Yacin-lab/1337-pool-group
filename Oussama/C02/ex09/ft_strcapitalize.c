#include <stdio.h>

int	str_is_alphanumeric(char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return 1;
	}
	return 0;
}

char	*ft_strcapitalize(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if((i == 0) || !str_is_alphanumeric(str[i - 1]))
			{
				if(str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
			else if(str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}

		i++;
	}
	
	return str;
}

int main()
{
	char str[] = "OUS-SiBAK-B5B";
	
	ft_strcapitalize(str);

	printf("%s\n", str);
	return 0;
}
