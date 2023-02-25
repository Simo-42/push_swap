/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:29:57 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/25 13:14:56 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_parsing_1(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc < 2)
		return (0);
	while (argc > j)
	{
		if ((ft_atoi(argv[j]) > 2147483647 || ft_atoi(argv[j]) < -2147483648)
			|| ft_isdigit(argv[j]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		j++;
	}
	return (1);
}

int	ft_parsing_2(int argc, char **argv, t_list **list_a)
{
	int	j;
	int	i;
	int	element;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		element = ft_atoi(argv[i]);
		ft_lstadd_back(list_a, ft_lstnew(element));
		i++;
	}
	return (1);
}
