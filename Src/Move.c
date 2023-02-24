/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:54:47 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/06 13:18:22 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_list **list, char c)
{
	t_list	*node;

	if (*list == NULL || (*list)->next == NULL)
		return ;
	node = *list;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = *list;
	*list = (*list)->next;
	node->next->next = NULL;
	if (c == 'a')
		write(1, "ra\n", 3);
	if (c == 'b')
		write(1, "rb\n", 3);
}

void	rra_rrb(t_list **list, char c)
{
	t_list	*node;

	if (*list == NULL || (*list)->next == NULL)
		return ;
	node = *list;
	while (node->next->next != NULL)
	{
		node = node->next;
	}
	node->next->next = *list;
	*list = node->next;
	node->next = NULL;
	if (c == 'a')
		write(1, "rra\n", 4);
	if (c == 'b')
		write(1, "rrb\n", 4);
}

void	sa_sb(t_list **listA, char c)
{
	t_list	*premier;
	t_list	*second;

	if (*listA == NULL || (*listA)->next == NULL)
		return ;
	premier = (*listA)->next;
	second = premier->next;
	premier->next = *listA;
	(*listA)->next = second;
	*listA = premier;
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
}

void	push_a(t_list **listA, t_list **listB)
{
	t_list	*node;

	if (*listB == NULL)
		return ;
	node = *listB;
	*listB = node->next;
	node->next = *listA;
	*listA = node;
	write(1, "pa\n", 3);
}

void	push_b(t_list **listB, t_list **listA)
{
	t_list	*node;

	if (*listA == NULL)
		return ;
	node = *listA;
	*listA = node->next;
	node->next = *listB;
	*listB = node;
	write(1, "pb\n", 3);
}
