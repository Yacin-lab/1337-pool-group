/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:56:33 by saad              #+#    #+#             */
/*   Updated: 2026/01/17 19:40:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_sort_in_tab(int *tab , int size)
{
	int start;
	int j;
	start = 0;
	while(start < size -1)
	{
		j = start + 1;
		while(j < size)
		{
			if(tab[start] > tab[j])
			ft_swap(&tab[start] , &tab[j]);
			j++;
		}
		start++;
	}
}
int main()
{
    int tab[] = {4, 2, 5, 1};
    int size = 4;
    int i = 0;

    ft_sort_in_tab(tab, size);

    printf("Sorted array: ");

    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}
