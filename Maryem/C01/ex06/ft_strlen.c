#include<unistd.h>
#include<stdio.h>
int ft_strlen(char *str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++; // nmchiw lcharacter jaya
    }
    return count; // kanrj3o length dyal string
}
int main()
{
    char str[] = "Hello";
    int res = ft_strlen(str);
    printf("%d\n",res);
    return 0;
}
