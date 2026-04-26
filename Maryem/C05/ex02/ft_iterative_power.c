#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
    if(power < 0)
    {
        return 0;
    }
    else if(power == 0)
    {
        return 1;
    }
    int i = 1;
    int result = 1;
    while(i <= power)
    {
        result = result * nb;
        i++;
    }
    return result;

}
int main()
{
    int nb = 6;
    int p = 4;
    int r = ft_iterative_power(nb,p);
    printf("%d\n",r);
    return 0;

}