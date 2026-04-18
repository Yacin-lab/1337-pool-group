#include<stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[] = "Hello";
    int r = ft_strlen(str);
    printf("%d\n",r);
    return 0;
}