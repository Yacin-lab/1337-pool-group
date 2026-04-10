#include <unistd.h>
#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int index = 1;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(index == 1)
            {
                str[i] = str[i] - 32;
            }
            index = 0;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(index == 0)
            {
                str[i] = str[i] + 32;
            }
            index = 0;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            index = 0;
        }
        else
        index = 1;
        i++;
        
    }
    return str;
}
int main()
{
    char str[] = "Hello";
    ft_strcapitalize(str);
    printf("%s\n",str);
    return 0;

}