/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 23:40:25 by lramirez          #+#    #+#             */
/*   Updated: 2017/08/04 10:43:23 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_intlen(unsigned int n)
{
	if (n > 9)
		return (1 + ft_intlen(n / 10));
	return (1);
}
