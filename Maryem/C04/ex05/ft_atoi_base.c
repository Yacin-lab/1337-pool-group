#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int chek_base(char *base)
{
    if(base[0] == '\0' || ft_strlen(base) <= 1)
    {
        return 0;
    }
    int i = 0;
    int j = 0;
    while(base[i] != '\0')
    {
        j = i + 1;
        while( base[j] != '\0')
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        if(base[i] == '-' || base[i] == '+' || (base[i] >= 0 && base[i] <= 31) || base[i] == 127)
        {
            return 0;
        }
        i++;

    }
    return 1;
}
int ft_atoi_base(char *str, char *base)
{
    int signe = 1;
    int result = 0;
    int base_len = ft_strlen(base);
    int i = 0;
    if(!chek_base(base))
    {
        return 0;
    }

        while(str[i] == ' ' || str[i] == '\t' ||str[i] == '\n')
        {
            i++;
        }
        while(str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
            {
                signe = signe * -1;
            }
            i++;
        }
        int j = 0;
        while(str[i] != '\0')
        {
            j = 0;
            while(base[j] != '\0')
            {
                if(str[i] == base[j])
                {
                    break;
                }
                j++;
            }
            if(j == base_len)
            {
                break;
            }
            result = result * base_len + j;
            i++;
        }
        return (result * signe);
}
int main()
{
    char str[] = "1A";
    char base[] = "0123456789ABCDEF";
    int r = ft_atoi_base(str,base);
    printf("%d\n",r);
    return 0;
}