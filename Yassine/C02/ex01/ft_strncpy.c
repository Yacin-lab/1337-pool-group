/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:54:17 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 21:24:53 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// The strncpy() function is similar to strcpy(), 
// but it copies at most n bytes from source to destination string. 
// If source is shorter than n, strncpy() adds a null character to 
// destination to ensure n characters are written. exp [h,e,l,\0,\0,\0]

// man strncpy: "If there is no null byte among the first n bytes 
// of src, the string placed in dest will not be null-terminated."
// y3ni ila kan n sghr mn src dik string li ghatcopa fdest maghatkonch
// fiha '\0'

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // bach ntfada warning dyal "comparison between signed and unsigned"
    unsigned int     i;
    
    i = 0;
    // ila tsala source wla wslna 7ad size li bghit ncopy khrj
    while (src[i] && n > 0)
    {
        dest[i] = src[i];
        n--;
        i++;
    }
    // darori nzido Null terminator bach nsdo string
    // ila tcopat src kolha f dest wmazal n kbir 
    // nkml dakchi lib9a f dest b '\0' hta nsali n.
    // (ila kan n < src maghatzadch '\0' f dest) 
    while (n > 0)
    {
        dest[i] = '\0';
        n--;
        i++;
    }

    // or 
    // while(n--)
    //     *(dest++) = '\0';
    return (dest);
}

/*int main(void) {
    char src[] = "Hello";
    char dest[20];

    // Copies "Hello" to dest
    // It returns a pointer to the dest string after copying the content from src.
    printf("%s\n", ft_strncpy(dest, src, 3));       // hell
    return(0);
}*/