/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 23:49:28 by lramirez          #+#    #+#             */
/*   Updated: 2017/08/04 10:43:23 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_lstdel(t_arg **format_list)
{
	t_arg	*tmp;
	t_arg	*tmp_next;

	tmp = *format_list;
	while (tmp)
	{
		tmp_next = tmp->next;
		free(tmp->format_code);
		free(tmp->flags);
		free(tmp->width);
		free(tmp->prec);
		free(tmp->mod);
		free(tmp->conv);
		free(tmp->type);
		free(tmp->opt_type_1);
		free(tmp->opt_type_2);
		ft_bzero(&tmp->opt_1, sizeof(int));
		ft_bzero(&tmp->opt_2, sizeof(int));
		free(tmp->print);
		tmp->next = NULL;
		free(tmp);
		tmp = tmp_next;
	}
	*format_list = NULL;
}
