/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:43:44 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 19:17:24 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     div;

    if (*b == 0)
    {
        return;
    }
    // khzant value dyal division a by b ftemp
    // howa lwl bach manf9adch 9imat a fach nbghi
    // ndir modulo a by b
    div = *a / *b;
    *b = *a % *b;
    *a = div;
}

/*int     main(void)
{
    int a = 42;
    int b = 10;
    
    ft_ultimate_div_mod(&a, &b);
    
    if (b == 0)
        printf("Error! Division by 0\n");
    else 
        printf("a / b = %d\na %% b = %d\n", a, b);
    
    return (0);
}*/