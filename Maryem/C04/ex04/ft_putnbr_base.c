#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int chek_base(char *base)
{
    if(base[0] == '\0' || ft_strlen(base) <= 1)
    {
        return 0;
    }
    int i = 0;
    int j = 0;
    while(base[i] != '\0')
    {
        j = i + 1;
        while( base[j] != '\0')
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        if(base[i] == '-' || base[i] == '+')
        {
            return 0;
        }
        i++;

    }
    return 1;
}
void put_nbr(long nb, int base_len, char *base)
{
    if(nb >= base_len)
    {
        put_nbr(nb / base_len, base_len ,base);
    }
    ft_putchar(base[nb % base_len ]);
}
void ft_putnbr_base(int nbr, char *base)
{
    long nb = nbr;
    if(!chek_base(base))
    {
        return;
    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    int base_len = ft_strlen(base);
    put_nbr(nb, base_len,base);
}
int main()
{
    int nb = -42;
    char str[] = "01";
   ft_putnbr_base(nb, str);
    return 0;
    
}