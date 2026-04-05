#include<unistd.h>
//#include<stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int left = 0;
    int right = size - 1;
    while(left < right)
    {
        int temp = tab[left];
        tab[left] = tab[right];
        tab[right] = temp;
        left++;
        right--;
    }
}
/*int main()
{
    int tab[] = {1,2,3,4,5};
    int size = 5;
    ft_rev_int_tab(tab,size);
    int i = 0;
    while(i < size)
    {
        printf("%d  ",tab[i]);
        i++;
    }
    return 0;

}*/