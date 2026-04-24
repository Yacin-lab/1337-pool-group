#include<unistd.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned i = 0;
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if(s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;
}
int main()
{
    char s1[] = "ab";
    char s2[] = "abc";
    int r = ft_strncmp(s1,s2,1);
    printf("%d\n",r);
    return 0;
}