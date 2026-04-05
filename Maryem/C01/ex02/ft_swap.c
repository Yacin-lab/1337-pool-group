#include<unistd.h>
//#include<stdio.h>
void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
/*int main()
{
    int a = 10;
    int b = 20;
    printf("Befor swap :\n");
    printf("a = %d , b = %d\n",a,b);
    ft_swap(&a,&b);
    printf("After swap :\n");
    printf("a = %d , b = %d\n",a,b);
    return 0;
}*/