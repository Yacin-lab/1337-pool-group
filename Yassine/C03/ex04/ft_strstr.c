/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 23:53:34 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/22 22:18:11 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    NAME:
        strstr - locate a substring
    
    DESCRIPTION:
        The strstr() function finds the first occurrence of the substring needle in the string
        haystack.
        Important: The terminating null bytes ('\0') are not compared.

    RETURN VALUE:
        These functions return a pointer to the beginning of the located substring, or NULL if
        the substring is not found.

        If needle is the empty string, the return value is always haystack itself
    
    ALGORITHM :
        1. find first char of to_find in str.
        2. check all the other chars of to_find in str.
        3. If there is a complete match, Return pointer to its location in str.
        4. If there is no complete match, Continue the search.
*/

char *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    k;
    
    if (*to_find == 0)
    {
        return (str);
    }
    
    i = 0;
    while (str[i])
    {
        k = 0;
        if (to_find[k] == str[i])
        {
            while (to_find[k] && str[i + k] && to_find[k] == str[i + k])
            {
                k++;
            }
            if (to_find[k] == '\0')
                return (&str[i]);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>

int     main(int c, char *v[])
{
    if (c == 3)
    {
        printf("the first occurrence of to_find in string is: %s\n", ft_strstr(v[1], v[2]));
    }
    else
    {
        printf("put two strings!\n");
    }
    return (0);
}