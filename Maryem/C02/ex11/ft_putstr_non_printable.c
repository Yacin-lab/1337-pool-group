#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr_non_printable(char *str)
{
    char hex[] = "0123456789abcdef";
    int i = 0;
    int indx = 0;
    int dx = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126)
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_putchar('\\');
            indx = ((unsigned char)str[i]) / 16;
            dx = ((unsigned char)str[i]) % 16;
            ft_putchar(hex[indx]);
            ft_putchar(hex[dx]);
        }
        i++;
    }
    
}
int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    write(1,"\n",1);
    return 0;

}