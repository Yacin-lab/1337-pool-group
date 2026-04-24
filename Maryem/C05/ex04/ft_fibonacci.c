#include<stdio.h>
int ft_fibonacci(int index)
{
    if(index < 0)
    {
        return 0;
    }
    else if(index == 0)
    {
        return 0;
    }
    else if(index == 1)
    {
        return 1;
    }

    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main()
{
    int nb = 5;
    int r = ft_fibonacci(5);
    printf("%d\n",r);
    return 0;
}