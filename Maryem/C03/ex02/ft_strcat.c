#include<unistd.h>
#include<stdio.h>
int ft_strlen (char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strcat(char *dest, char *src)
{
    int d = ft_strlen(dest);
    int i = 0;
    while(src[i] != '\0')
    {
        dest[d] = src[i];
        d++;
        i++;
    }
    dest[d] = '\0';
    return(dest);
}
int main()
{
    char src[] = " world";
    char dest [20] = "Hello";
    char *s = ft_strcat(dest,src);
    printf("%s\n",s);
    return 0;
}