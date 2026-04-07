#include<unistd.h>
#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    if(*b != 0)  // kanchof wach b machi 0 bach man9smoch 3la 0
    {
        int temp = *a;  // nkhzn value l9dima dyal a
        *a = *a / *b;  // a katwli natija dyal division
        *b = temp % *b; // b katwli ba9i dyal division (modulo)
    }
}
int main()
{
    int a = 10;
    int b = 2;
    ft_ultimate_div_mod(&a,&b); // kan3tiw ladresses bach nbdlo lvalues
    printf("a = %d\n",a); // ghadi t3tina 5
    printf("b = %d\n",b); // ghadi t3tina 0
    return 0;

}