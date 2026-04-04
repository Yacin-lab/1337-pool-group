#include<unistd.h>
//#include<stdio.h>
int ft_strlen(char *str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
/*int main()
{
    char str[] = "Hello";
    int res = ft_strlen(str);
    printf("%d\n",res);
    return 0;
}*/
