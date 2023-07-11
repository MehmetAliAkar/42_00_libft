/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:56:58 by meakar            #+#    #+#             */
/*   Updated: 2023/07/05 21:46:39 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  dst_len;
    size_t  result;

    if (dstsize == 0)
        return (ft_strlen(src));
    else if (dstsize < ft_strlen(dst))
        result = ft_strlen(src) + dstsize;
    else
        result = ft_strlen(src) + ft_strlen(dst);
    dst_len = ft_strlen(dst);
    i = 0;
    while (src[i] != '\0' && i + 1 < dstsize)
    {
        dst[dst_len]=src[i];
        i++;
        dst_len++;
    }
    dst[dst_len] = '\0';
    return (result);
}