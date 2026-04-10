#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    if( size == 0)
    {
        return (ft_strlen(src));
    }
    while( i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (ft_strlen(src));
}
int main()
{
    char src[] = "Hello";
    char dest[4];
    unsigned int s = ft_strlcpy(dest,src,4);
    printf("%s\n",dest);
    printf("%d\n",s);
    return 0;

}