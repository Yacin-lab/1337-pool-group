#include<unistd.h>
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1,&str[i],1);  // kanprintiw character b character
        i++;
    }
}
int main()
{
    char str[] = "Hello";
    ft_putstr(str);  // kan3iyto lfunction bach taffichi string
    return 0;
}