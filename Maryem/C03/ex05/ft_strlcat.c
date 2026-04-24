#include<stdio.h>
int ft_strlen(char *s)
{
    int i= 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int d_len = ft_strlen(dest);
    unsigned int s_len = ft_strlen(src);
    unsigned int i = 0;
    unsigned int origenal = d_len;
    if(size == 0)
    {
        return (d_len + s_len);
    }
    if(size <= d_len)
    {
        return (size + s_len);
    }
    while(i < (size - d_len - 1) && src[i] != '\0')
    {
        dest[d_len] = src[i];
        d_len++;
        i++;
    }
    dest[d_len] = '\0';
    return(origenal + s_len);
}
int main()
{
    char dest[] = "Hello";
    char src[] = " World";
    unsigned int size = 3;
    int r = ft_strlcat(dest,src,size);
    printf("%d\n",r);
    printf("%s\n",dest);
    return 0;

}