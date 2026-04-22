#include<stdio.h>
int ft_is_prime(int nb)
{
    if(nb <= 1)
    {
        return 0;
    }
    int i = 2;
    while(i < nb)
    {
        if(nb  % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int nb = 7;
    int r = ft_is_prime(nb);
    printf("%d\n",r);
    return 0;
}