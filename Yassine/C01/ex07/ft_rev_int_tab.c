/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 18:05:58 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 19:17:54 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int     left;
    int     right;
    int     temp;

    // Tecnique Two Pointers
    // ila kan size <= 1 ghaykhrj bo7do
    left = 0;
    right = size - 1;
    while (left < right)
    {
        temp = *(tab + left);       // or tab[left]
        *(tab + left) = *(tab + right);
        *(tab + right) = temp;
        left++;
        right--;
    }
}

/*int     main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    ft_rev_int_tab(arr, size);
    
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return (0);
}*/