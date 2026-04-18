#include <stdio.h>
int ft_atoi(char *str)
{
    int signe = 1;
    int result = 0;
    int i = 0;
    
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
        while(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }
        return (result * signe);
}
int main()
{
    char str[] = "  ---+--+1234ab567";
    int r = ft_atoi(str);
    printf("%d\n",r);
    return 0;
}