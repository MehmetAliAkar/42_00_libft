/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:56:41 by meakar            #+#    #+#             */
/*   Updated: 2023/07/07 15:14:50 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    long long value;

    sign = 1;
    value = 0;
    while (*str == ' ' || *str == '\f'  || *str == '\n' ||  *str == '\r'    || *str == '\t' || *str == 'v')
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        ++str;
    while (ft_isdigit(*str))
    {
        value = value * 10 + (*str - '0');
        str++;
    }
    value = sign == 1 ? value : -value;
    return (value);
}