/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:21:46 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/25 17:53:56 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elements(t_list **list_a, t_list **list_b)
{
	t_list	*node;
	t_list	*max_node;
	int		max_value;

	node = *list_a;
	max_node = node;
	max_value = node->content;
	while (node != NULL)
	{
		if (node->content > max_value)
		{
			max_node = node;
			max_value = node->content;
		}
		node = node->next;
	}
	node = *list_a;
	move_nodes(list_a, list_b, max_value, max_node);
}

void	move_nodes(t_list **list_a, t_list **list_b, int max_value,
		t_list *max_node)
{
	int	mediane;

	mediane = ft_get_mediane(*list_a);
	while (*list_a != NULL)
	{
		if ((*list_a)->content == max_value)
			ra_rb(list_a, 'a');
		if (*list_a != max_node)
		{
			push_b(list_b, list_a);
			if ((*list_b)->content < mediane)
				ra_rb(list_b, 'b');
		}
		else
			break ;
	}
}

int	is_sorted(t_list *list)
{
	t_list	*content;

	content = list;
	while (content != NULL && content->next != NULL)
	{
		if (content->content > content->next->content)
		{
			return (0);
		}
		content = content->next;
	}
	return (1);
}

int	ft_get_mediane(t_list *list)
{
	int	size;
	int	*tab;
	int	i;
	int	mediane;

	size = ft_lst_size(list);
	tab = malloc(sizeof(int) * (size));
	i = 0;
	while (list != NULL)
	{
		tab[i] = list->content;
		list = list->next;
		i++;
	}
	ft_sort_int_tab(tab, size);
	if (size % 2 == 0)
		mediane = tab[size / 2 - 1];
	else
		mediane = tab[size / 2];
	free(tab);
	return (mediane);
}
