/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:09:21 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 18:20:41 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*int     main(void)
{
    int a = 10;
    int b = 20;
    
    ft_swap(&a, &b);
    
    printf("a = %d\nb = %d\n", a, b);
    
    return (0);
}*/