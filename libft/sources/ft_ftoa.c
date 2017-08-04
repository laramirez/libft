/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:01:47 by lararamirez       #+#    #+#             */
/*   Updated: 2017/08/04 10:43:23 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_ftoa(double nbr, size_t afterpoint)
{
    int     i_part;
    double  f_part;
    char    *ret;
    char    *dot;
    size_t  dec_len;
    char    *decimals;
    char    *tmp;

    if (!afterpoint)
        return (ft_itoa((int)(nbr + 0.5)));
    i_part = (int)nbr;
    f_part = nbr - (float)i_part;
    if (f_part == 0)
        decimals = ft_create_padding('0', afterpoint);
    else
    {
        while (afterpoint)
        {
            f_part *= 10;
            afterpoint--;
        }
        dec_len = ft_intlen((int)f_part);
        f_part += 0.5;
        decimals = ft_itoa((int)f_part);
        if (dec_len != ft_intlen((int)f_part))
        {
            i_part += 1;
            tmp = decimals;
            decimals = ft_strdup(decimals + 1);
            free (tmp);
        }
    }
    dot = ft_create_padding('.', 1);
    ret = ft_append_after(dot, ft_itoa(i_part));
    ret = ft_strjoinfree(ret, decimals);
    return (ret);
}