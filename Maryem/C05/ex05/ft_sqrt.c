#include<stdio.h>
int ft_sqrt(int nb)
{
    if(nb <= 0)
    {
        return 0;
    }
    int i = 1;
    while(i * i <= nb)
    {
        if(i * i == nb)
        {
            return i;
        }
        i++;
    }
    return 0;
}
int main()
{
    int nb = 9;
    int r = ft_sqrt(nb);
    printf("%d\n",r);
    return 0;
}