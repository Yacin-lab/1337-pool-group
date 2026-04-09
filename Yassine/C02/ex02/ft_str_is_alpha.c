/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:25:28 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/09 00:13:42 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    // if string is empty return 1
    if (!str)
        return (1);
    
    while (*str)
    {
        // had l'interval li kayhamni:  ***]A or Z[***and***]a or z[***
        
        if((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
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

    printf("%d\n", ft_str_is_alpha("hello4"));
    
    return (0);
}*/