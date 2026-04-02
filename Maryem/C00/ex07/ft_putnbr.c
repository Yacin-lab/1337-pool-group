#include<unistd.h>
void ft_putnbr(int nb)
{
    char buffer[12];
    long num;
    int i = 0;
    num = nb;
    if(num == 0)
    {
        write(1, "0",1);
        return;
    }
    if(num < 0)
    {
        write(1,"-",1);
        num = -num;
    }
    while(num > 0)
    {
        buffer[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }
    while(i > 0)
    {
        i--;
        write(1,&buffer[i],1);
    }
}

int main()
{
    ft_putnbr(0);
    write(1,"\n",1);
    return 0;
}