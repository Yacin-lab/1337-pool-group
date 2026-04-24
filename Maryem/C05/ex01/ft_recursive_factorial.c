#include <stdio.h>
int ft_recursive_factorial(int nb)
{
    if(nb == 0 || nb == 1)
    {
        return 1;
    }
    else if(nb < 0)
    {
        return 0;
    }
    return (nb * ft_recursive_factorial(nb - 1));
}
int main()
{
    int nb = 6;
    int r = ft_recursive_factorial(nb);
    printf("%d\n",r);
    return 0;
}
