#include<unistd.h>
//#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    if(*b != 0)
    {
        int temp = *a;
        *a = *a / *b;
        *b = temp % *b;
    }
}
/*int main()
{
    int a = 10;
    int b = 2;
    ft_ultimate_div_mod(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;

}*/