/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:47:20 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 21:55:15 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int     ft_str_is_numeric(char *str)
{
    // if string is empty return 1
    if (!str)
        return (1);
    
    while (*str)
    {
        // had l'interval li kayhamni:  ***]0 or 9[***
        
        if(*str < '0' || *str > '9')
        {
            return (0);
        }
        str++;
    }
    return (1);
}

/*int     main(void)
{
    // char empty[1] = "";      // Allocates 1 byte, initializes as '\0'
    // char buffer[100] = "";   // Allocates 100 bytes, first character is '\0'

    printf("%d\n", ft_str_is_numeric("478u"));
    
    return (0);
}*/