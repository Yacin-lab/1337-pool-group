#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        i++;
                }
                else
                        return 0;
        }
        return 1;
}

int main()
{
        printf("%d\n", ft_str_is_uppercase("Ou"));

        return 0;
} 
