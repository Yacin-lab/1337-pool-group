#include<unistd.h>
#include<stdio.h>
void ft_swap(int *a, int *b)
{
    int temp = *a; // nkhzn value dyal a fvariable temp
    *a = *b;    // kan7et value dyal b fa
    *b = temp;  // kanrje3 value lqdima dyal a lb

}
int main()
{
    int a = 10;
    int b = 20;
    printf("Befor swap :\n");
    printf("a = %d , b = %d\n",a,b);
    ft_swap(&a,&b);  // kan3tiw lfaunction ladresses bach nbdlo lvalues
    printf("After swap :\n");
    printf("a = %d , b = %d\n",a,b);
    return 0;
}