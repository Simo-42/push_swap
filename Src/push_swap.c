/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:45:01 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/07 14:09:09 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (ft_parsing_1(argc, argv) == 0 || ft_parsing_2(argc, argv, &list_a) == 0)
		return (0);
	else if (ft_lst_size(list_a) == 2 && !(is_sorted(list_a) == 1))
		sort_pile_2(&list_a, 'a');
	else if (ft_lst_size(list_a) == 3 && !(is_sorted(list_a) == 1))
		sort_pile_3(&list_a, 'a');
	else if (ft_lst_size(list_a) == 4 && !(is_sorted(list_a) == 1))
		sort_pile_4(&list_a, &list_b);
	else if (ft_lst_size(list_a) == 5 && !(is_sorted(list_a) == 1))
		sort_pile_5(&list_a, &list_b);
	else if (ft_lst_size(list_a) > 5 && !(is_sorted(list_a) == 1))
	{
		push_elements(&list_a, &list_b);
		ft_bigtri(&list_a, &list_b);
	}
	ft_free(&list_b);
	ft_free(&list_a);
	return (0);
}
/*/
ft_lstiter(list_a, print_element_a);
void	print_element_a(int content)
{
	printf("A = %d\n -- \n", content);
}
void	print_element_b(int content)
{
	printf("B = %d\n -- \n", content);
}*/