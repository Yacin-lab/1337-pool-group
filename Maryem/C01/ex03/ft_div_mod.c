#include<unistd.h>
//#include<stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
   
}
/*int main()
{
    int a = 10;
    int b = 2;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
    printf("div = %d\n",div);
    printf("mod = %d\n",mod);
    return 0;
}*/