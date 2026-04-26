#include<stdio.h>
int ft_recursive_power(int nb, int power)
{
    if(power < 0)
    {
        return 0;
    }
    else if(power == 0)
    {
        return 1;
    }
    return (nb * (ft_recursive_power(nb, power - 1)));
}
int main()
{
    int nb = 6;
    int p = 4;
    int r = ft_recursive_power(nb,p);
    printf("%d\n",r);
    return 0;

}
