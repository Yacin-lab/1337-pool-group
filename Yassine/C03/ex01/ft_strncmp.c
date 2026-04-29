/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:06:36 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/22 01:25:35 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    NAME:
       strncmp - compare two strings
    
    DESCRIPTION:
       The strcmp() function compares the two strings s1 and s2. The locale is not taken into account
       The comparison is done using unsigned characters.

    RETURN VALUE:
       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and
       s2, as follows:

       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2.
*/

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    /*
        unsigned (size_t): Used for values that can never be negative,
        such as memory sizes (malloc) or counting bytes and string lengths.
        signed (int): Used for general loops or functions that need to return 
        negative values to signal errors or differences
    */
    unsigned int     i;
    
    /*
        important:
        if n is 0, the standard function should return 0
    */
    if (n <= 0)
        return (0);

    i = 0;
    while (s1[i] && s2[i] && i < n - 1)
    {
        if (s1[i] != s2[i])
            break;
        i++;
    }
    // 7ta ila kant s1 > s2 or vice versa ghayrja3 difference between '\0' and character
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int     main(int c, char **v)
{
    // char s1[] = "ApplA";
    // char s2[] = "Applet";

    if (c == 3) {
    
  	// Compare two strings upto 
  	// 4 characters and print result
    int res = ft_strncmp(v[1], v[2], 4);

    if (res == 0) 
        printf("s1 and s2 are same\n");
  	else if (res < 0)
      	printf("s1 is lexicographically smaller than s2\n");
  	else
      	printf("s1 is lexicographically greater than s2\n");
    }
    else
    {
        printf("put two strings to compares it\n");
    }
    
    return (0);
}
*/