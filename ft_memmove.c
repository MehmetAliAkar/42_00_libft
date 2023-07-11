/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:23:37 by meakar            #+#    #+#             */
/*   Updated: 2023/07/05 20:33:29 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void * dest, const void *src, size_t len)
{
    if (!dest && !src)
        return (NULL);
    if (dest < src) // if there is no conflict use mempcy function
        ft_memcpy(dest, src, len);
    else
    {
        while (len--)
            *((unsigned char *)(dest + len))= *((unsigned char *)(src + len));
    }
    return (dest);
}