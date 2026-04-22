#include <stdio.h>
int ft_iterative_factorial(int nb)
{
    if(nb == 0 || nb == 1)
    {
        return 1;
    }
    else if(nb < 0)
    {
        return 0;
    }
    int i = 1;
    int result = 1;
    while(i <= nb)
    {
        result = result * i;
        i++;
    }
    return result;
}
int main()
{
    int nb = 6;
    int r = ft_iterative_factorial(nb);
    printf("%d\n",r);
    return 0;
}