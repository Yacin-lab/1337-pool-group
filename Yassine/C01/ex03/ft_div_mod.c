/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:20:04 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/10 17:12:35 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int     main(void)
{
    int div, mod;
    int a = 42;
    int b = 10;
    
    ft_div_mod(a, b, &div, &mod);
    
    if (b == 0)
        printf("Error! Division by 0\n");
    else 
        printf("a / b = %d\na %% b = %d\n", div, mod);
    
    return (0);
}