#include<unistd.h>
#include<stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42; // nbdlo lvalue li kaychir liha pointer (nb ghadi tweli 42)
}
int main()
{
    int nb = 10;
    int *p = &nb;
     ft_ft(p);  // kan3tiw adresse lfunction bach tbdel lvalue
     printf("%d\n",nb);
     return 0;
}