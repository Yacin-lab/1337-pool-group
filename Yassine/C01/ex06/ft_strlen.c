/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:08:16 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 19:11:13 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int     ft_strlen(char *str)
{
    int     idx;

    // kantcheck wach str ktpointi 3la NULL
    // ila kan ah nkhrj bach may3tinich Segmentation Fault
    // 7it kan7awl nwsal lblasa makaynach f memory
    if (!str)
    {
        return (-1);
    }
    
    // methode 1:
    idx = 0;
    while (str[idx])
    {
        idx++;
    }
    return (idx);
    
    // methode 2:
    // int count = 0;
    // while (*str)
    // {
    //     str++;
    //     count++;
    // }
    // return (count);

    // methode 3:
    // char *ptr = str;
    // while(*ptr)
    // {
    //     ptr++;
    // }
    // return (ptr - str);
}

/*int main(void)
{

    printf("%d\n", ft_strlen("hello")); // len = 5
    
    return (0);
}*/