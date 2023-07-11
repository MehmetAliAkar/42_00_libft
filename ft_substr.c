/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:02:11 by meakar            #+#    #+#             */
/*   Updated: 2023/07/06 19:54:03 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned char * new_s;
    new_s = (unsigned char *)s;
    size_t  i;
    size_t  slen;
    size_t  j;

    slen = ft_strlen(s);
    i = start;
    j = 0;
    if (slen - start < len)
    {
        new_s = (unsigned char*)malloc(sizeof (char) * (slen - start));
        while (i < (slen - start))
            new_s[j++] = s[i++];
    }
    else
    {
        new_s = (unsigned char*)malloc(sizeof (char) * (len));
        while (i < (len))
            new_s[j++] = s[i++];
    }
    return ((char*)new_s);
}