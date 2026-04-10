#include<unistd.h>
//#include<stdio.h>
int ft_str_is_alpha(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
    int r = ft_str_is_alpha(str);
    printf("%d\n",r);
    return 0;
}*/