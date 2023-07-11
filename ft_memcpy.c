/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:49 by meakar            #+#    #+#             */
/*   Updated: 2023/07/05 18:16:06 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (0);
    while (i < n)
    {
        *((unsigned char *)(dest + i)) = *((unsigned char*)(src + i));
        i++;
    }
    return (dest);
}