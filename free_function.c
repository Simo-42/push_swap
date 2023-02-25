/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:06:10 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/25 18:10:08 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free(t_list **pile_a)
{
	t_list	*tmp;

	while ((*pile_a))
	{
		tmp = (*pile_a);
		(*pile_a) = (*pile_a)->next;
		free(tmp);
	}
	return (0);
}

int	ft_free_double(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	while ((*pile_a))
	{
		tmp = (*pile_a);
		(*pile_a) = (*pile_a)->next;
		free(tmp);
	}
	while ((*pile_b))
	{
		tmp1 = (*pile_b);
		(*pile_b) = (*pile_b)->next;
		free(tmp1);
	}
	return (0);
}
