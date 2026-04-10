#include<unistd.h>
#include<stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0) // kanchof wach b machi 0 bach man9smoch 3la 0
    {
        *div = a / b;  // kan7t natija dyal division fdiv
        *mod = a % b;  // kan7t lba9i dyal division (modulo) fmod
    }
   
}
int main()
{
    int a = 10;
    int b = 2;
    int div;  // variable bach nkhznou fih natija division
    int mod;  // variable bach nkhznou fih natija modulo
    ft_div_mod(a,b,&div,&mod);  // kan3tiw ladresses bach nrj3o natija
    printf("div = %d\n",div);
    printf("mod = %d\n",mod);
    return 0;
}