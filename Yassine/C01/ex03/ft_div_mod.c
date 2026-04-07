/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:20:04 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 21:30:16 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b == 0)
    {
        return;
    }
    *div = a / b;
    *mod = a % b;
}

/*int     main(void)
{
    int div, mod;
    int a = 44;
    int b = 10;
    
    ft_div_mod(a, b, &div, &mod);
    
    if (b == 0)
        printf("Error! Division by 0\n");
    else 
        printf("a / b = %d\na %% b = %d\n", div, mod);
    
    return (0);
}*/