#include <stdio.h>

char    *ft_strlowercase(char *str)
{
        int i = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] += 32;
                }
                i++;
        }
        return str;
}

int     main()
{
        char str[] = "Oussbak";

        ft_strlowercase(str);

        printf("%s\n", str);

        return 0;
}
