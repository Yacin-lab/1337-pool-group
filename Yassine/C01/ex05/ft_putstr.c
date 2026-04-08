/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 21:29:19 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 19:10:33 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    // ila kan str kypointi 3la NULL
    if (!str)
    {
        return;
    }
    //methode 1
    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }

    // methode 2 
    // while(*str != '\0')
    // {
    //     ft_putchar(*(str++));
    // }

    // methode 3
    // i = 0;
    // while(str[i] != '\0')
    // {
    //     ft_putchar(*(str + i));
    //     i++;
    // }
}

/*int     main(void)
{
    ft_putstr("Hello World!\n");
    
    return (0);
}*/