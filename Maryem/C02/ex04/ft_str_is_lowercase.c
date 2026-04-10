#include<unistd.h>
//#include<stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else
        return 0;
    }
    return 1;
}
/*int main()
{
    char str[] = "";
    int r = ft_str_is_lowercase(str);
    printf("%d\n",r);
    return 0;
}*/