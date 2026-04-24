#include<unistd.h>
#include<stdio.h>
int ft_strlen(char *s)
{
    int i = 0 ;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int d = ft_strlen(dest);
    unsigned int i = 0;
    while(i < nb && src[i] != '\0')
    {
        dest[d] = src[i];
        d++;
        i++;
    }
    dest[d] = '\0';
    return dest;
}
int main()
{
    char src[] = " world";
    char dest [20] = "Hello";
    char *s = ft_strncat(dest,src,3);
    printf("%s\n",s);
    return 0;
}