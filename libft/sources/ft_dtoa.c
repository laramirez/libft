/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:42:47 by lararamirez       #+#    #+#             */
/*   Updated: 2017/08/04 10:43:23 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char    *ft_decimalstoa(double f_part, long *i_part, size_t prec)
{
	char	*decimals;
	size_t	dec_len;
	char    *tmp;
	
	if (f_part < 0)
		f_part = -f_part;
	while (prec)
	{
		f_part *= 10;
		prec--;
	}
	dec_len = ft_longlen((long)f_part);
	f_part += 0.5;
	decimals = ft_ultoa((long)f_part);
	if (dec_len != ft_longlen((long)f_part))
	{
		*i_part += 1;
		tmp = decimals;
		decimals = ft_strdup(decimals + 1);
		free (tmp);
	}
	return (decimals);
}

char    *ft_dtoa(double nbr, size_t prec)
{
	long		i_part;
	double		f_part;
	char		*ret;
	char		*dot;
	char    	*decimals;

	if (!prec)
	{
		nbr = (nbr < 0) ? nbr - 0.5 : nbr + 0.5;
		return (ft_ltoa((long)nbr));
	}
	i_part = (long)nbr;
	f_part = nbr - (double)i_part;
	if (f_part == 0)
		decimals = ft_create_padding('0', prec);
	else
		decimals = ft_decimalstoa(f_part, &i_part, prec);
	dot = ft_create_padding('.', 1);
	ret = ft_append_after(dot, ft_ltoa(i_part));
	ret = ft_strjoinfree(ret, decimals);
	return (ret);
}