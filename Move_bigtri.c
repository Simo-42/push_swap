/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Move_bigtri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:07:23 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/25 18:07:58 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_val_top(t_list **list, int value, char c)
{
	int	pos;
	int	size;

	pos = ft_getpos(*list, value);
	if (pos == 0)
		return ;
	size = ft_lst_size(*list);
	if (pos < size / 2)
	{
		while (pos--)
			ra_rb(list, c);
	}
	else
	{
		pos = size - pos;
		while (pos--)
			rra_rrb(list, c);
	}
}

int	ft_getpos(t_list *list, int value)
{
	int		pos;
	t_list	*tmp;

	pos = 0;
	tmp = list;
	while (tmp)
	{
		if (tmp->content == value)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (-1);
}

int	find_min_in_list(t_list *listB)
{
	int		min;
	t_list	*current;
	int		val;

	min = INT_MAX;
	current = listB;
	while (current)
	{
		val = current->content;
		if (val < min)
			min = val;
		current = current->next;
	}
	return (min);
}
