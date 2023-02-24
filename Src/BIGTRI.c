/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BIGTRI.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:06:42 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/06 19:26:45 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_get_majorant_value(long number, t_list *list)
{
	t_list	*closest_larger;
	long	closest_diff;
	long	diff;

	closest_larger = NULL;
	closest_diff = 0;
	while (list)
	{
		diff = list->content - number;
		if (diff >= 0 && (closest_larger == NULL || diff < closest_diff))
		{
			closest_larger = list;
			closest_diff = diff;
		}
		list = list->next;
	}
	return (closest_diff + number);
}

int	get_tmp(int tmp, int size_b, int size_a, int i)
{
	if (tmp > (size_a / 2))
		tmp = (size_a) - tmp;
	if (i > (size_b / 2))
		tmp += size_b - i;
	else
		tmp = tmp + i;
	return (tmp);
}

int	get_best_moves(t_list *list_a, t_list *list_b)
{
	int	i;
	int	tmp;
	int	size;
	int	v;
	int	x;

	i = 0;
	size = ft_lst_size(list_b);
	v = list_b->content;
	x = ft_getpos(list_a, ft_get_majorant_value(list_b->content, list_a));
	while (list_b != NULL && x)
	{
		tmp = ft_getpos(list_a, ft_get_majorant_value(list_b->content, list_a));
		tmp = get_tmp(tmp, size, ft_lst_size(list_a), ++i);
		if (tmp <= x)
		{
			v = list_b->content;
			x = tmp;
		}
		list_b = list_b->next;
	}
	return (v);
}

void	ft_bigtri(t_list **list_a, t_list **list_b)
{
	int	i;

	while (*list_b != NULL)
	{
		i = get_best_moves(*list_a, *list_b);
		ft_put_val_top(list_b, i, 'b');
		ft_put_val_top(list_a, ft_get_majorant_value(i, *list_a), 'a');
		push_a(list_a, list_b);
	}
	while (!(is_sorted(*list_a) == 1))
		ft_put_val_top(list_a, find_min_in_list(*list_a), 'a');
}
