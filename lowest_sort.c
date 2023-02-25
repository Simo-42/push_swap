/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:26:59 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/06 16:37:30 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pile_3(t_list **pile, char a)
{
	t_list	*current;
	int		top;
	int		mid;
	int		bot;

	current = *pile;
	top = current->content;
	mid = current->next->content;
	bot = current->next->next->content;
	if (top > mid && top > bot && mid > bot)
	{
		sa_sb(pile, a);
		rra_rrb(pile, a);
	}
	else if (top > mid && top < bot)
		sa_sb(pile, a);
	else if (top < mid && mid > bot && bot < top)
		rra_rrb(pile, a);
	else if (top < mid && mid > bot && top < bot)
	{
		sa_sb(pile, a);
		ra_rb(pile, a);
	}
	else if (top > mid && top > bot && mid < bot)
		ra_rb(pile, a);
}

void	sort_pile_2(t_list **list_a, char a)
{
	t_list	*current;
	int		top;
	int		mid;

	current = *list_a;
	top = current->content;
	mid = current->next->content;
	if (top > mid)
		sa_sb(list_a, a);
}

void	sort_pile_4(t_list **list_a, t_list **list_b)
{
	ft_put_val_top(list_a, find_min_in_list(*list_a), 'a');
	push_b(list_b, list_a);
	sort_pile_3(list_a, 'a');
	push_a(list_a, list_b);
}

void	sort_pile_5(t_list **list_a, t_list **list_b)
{
	ft_put_val_top(list_a, find_min_in_list(*list_a), 'a');
	push_b(list_b, list_a);
	sort_pile_4(list_a, list_b);
	push_a(list_a, list_b);
}
