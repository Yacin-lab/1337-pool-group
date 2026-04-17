/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 21:12:08 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/14 01:07:16 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int     ft_str_is_printable(char *str)
{
    while (*str)
    {
        /*
            had l'interval li kayhamni:  [' '... and ...'~']
            3ksto bach ila l9it character kharj
            l'interval li bghit, yrj3 0
        */
        if (*str < ' ' || *str > '~')
        {
            return (0);
        }
        str++;
    }
    
    // ila tsalat loop y3ni string kamlha printable chars
    return (1);
}

/*int     main(void)
{

    printf("%d\n", ft_str_is_printable("5 ~"));
    
    return (0);
}*/