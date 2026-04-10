#include<unistd.h>
#include<stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        
    }
    *dest = '\0';
    return dest;
}
int main()
{
    char src[] = "Hello world";
    char dest[20];
    ft_strcpy(dest,src);
    printf("%s\n",dest);
    return 0;
}