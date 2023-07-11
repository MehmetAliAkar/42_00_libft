/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:07:21 by meakar            #+#    #+#             */
/*   Updated: 2023/07/06 16:57:25 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  nlen;

    if (*needle == 0)
        return ((char *)haystack);
    i = 0;
    nlen = ft_strlen(needle);
    while (i < len && haystack[i])
    {
        if (haystack[i] == *needle && len - i >= nlen && ft_strncmp(&haystack[i],needle, nlen) == 0)
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}