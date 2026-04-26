#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                if(str[i] >= ' ' && str[i] <= '~')
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
        printf("%d\n", ft_str_is_printable("Ou"));

        return 0;
}
