/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 20:47:41 by lramirez          #+#    #+#             */
/*   Updated: 2017/08/02 11:37:16 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	**ft_strtabnew(size_t size)
{
	char	**tab;

	if (!(tab = (char **)(malloc(sizeof(char **) * (size + 1)))))
		return (NULL);
	tab[size] = NULL;
	return (tab);
}
