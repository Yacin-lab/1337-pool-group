/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:01:20 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/17 18:45:24 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/*
  function:     ft_strlcpy
  ---------------------------------------------------------------------------------------
  RETURN VALUE:
  The length of the total string that they tried to create (as if truncation didn't occur).

  Hna kayhamni size dyal dest. machi bhal f strcpy w strncpy
  bach mankhrj 3lih + nzid null-terminator
  
  Safe string copy:
  Copies a string from src to dst with a size limit.
  Ensures dst is null-terminated and prevents buffer overflow.
  Returns the total length of src.

  - size: ya3ni number of chars + '\0'
  - len: y3ni number of chars bla '\0'
*/

int     ft_strlen(char *str)
{
    int     idx;
    
    idx = 0;
    while (str[idx])
    {
        idx++;
    }
    return (idx);
}

/*
  dest = destination buffer
  src = source string
  size = size of dest buffer
*/
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     srcLen;
    unsigned int     i;
    

    srcLen = ft_strlen(src);
    
    /*
        Imp: if destSize == 0 y3ni ma3ndi ta blasa nktb fiha. (bla mat9is dest)
    */
    if (size)
    {
        /*
            ila kant len(src) > size - 1 dyal dest, src ghatw93 liha truncation
            (size - 1) bach nkhli blasa l '\0' fdest.
        */
        i = 0;
        while (i < size - 1 && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (srcLen);
}

/*int     main(void)
{
    unsigned int sizeDest = 6;
    char src[] = "hello";
    char dest[sizeDest];

    unsigned int lenSrc = ft_strlcpy(dest, src, sizeDest);

    if (lenSrc < sizeDest)      
                                
        printf("%d chars successfully copied\n", lenSrc);
    if else (lenSrc >= sizeDest)
        printf("truncation happened\n");
        
    return(0);
}*/