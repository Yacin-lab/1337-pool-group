#include<unistd.h>
//#include<stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
/*int main()
{
    char src[] = "Hello world";
    char des[15];
    unsigned int n = 3;
    ft_strncpy(des,src,n);
    printf("%s\n",des);
    return 0;

}*/