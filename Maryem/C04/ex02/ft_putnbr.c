#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    char buffer [12];
    long nbr = nb;
    int i;
    if(nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    else if (nbr == 0)
    {
        ft_putchar('0');
    }
    i = 0;
    while(nbr > 0)
    {
        buffer[i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i++;

    }
    i--;
    while(i >= 0)
    {
        ft_putchar(buffer[i]);
        i--;
    }
}
int main()
{
    int nb = -2147483648;
    ft_putnbr(nb);
    write(1, "\n", 1);
    return 0;
}