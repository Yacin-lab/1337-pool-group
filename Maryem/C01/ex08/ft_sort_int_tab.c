#include<unistd.h>
#include<stdio.h>
void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ft_sort_int_tab(int *tab, int size)
{ 
    // function katdir bubble Sort
    int i = 0;
    int j;
    while(i < size - 1)
    {
        j = 0;
        while(j < size - i - 1)
        {
            if(tab[j] > tab[j + 1])
            {
               ft_swap(&tab[j],&tab[j+1]);
            }
            j++;
        }
        i++;
    }
}
int main()
{
    int arr[] = {5,6,4,3,2,1};
    int size = 6;
    ft_sort_int_tab(arr,size);
    int i = 0;
    while(i < size)
    {
        printf("%d  ",arr[i]);
        i++;
    }
    return 0;

}