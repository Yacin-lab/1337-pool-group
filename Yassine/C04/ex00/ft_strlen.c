/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:01:19 by ybaadi            #+#    #+#             */
/*   Updated: 2026/05/05 12:26:20 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size_t     ft_strlen(const char *str); 
int     ft_strlen(char *str)
{
    int     index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    return (index);
}


#include <stdio.h>
int     main(void) {
    
    char s[] = "Hello";
    
    printf("Calling ft_strlen(\"%s\");\n", s);
    printf("String length: %d\n", ft_strlen(s));
    
    return (0);
}
