/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:13:43 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/06 13:18:12 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_swap(int *tab, int i)
{
	int	tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}

int	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab, i);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	if (size % 2 == 0)
		return (tab[size / 2 - 1]);
	else
		return (tab[size / 2]);
}

int	get_mediane(t_list *list)
{
	int		*tab;
	t_list	*node;
	int		i;

	i = 0;
	node = list;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	tab = malloc(sizeof(int) * i);
	node = list;
	i = 0;
	while (node != NULL)
	{
		tab[i] = node->content;
		i++;
		node = node->next;
	}
	return (ft_sort_int_tab(tab, ft_strlen(tab)));
}
// int	main(void)
// {
// 	int	tab1[];
// 	int	tab2[];
// 	int	tab3[];
// 	int	tab4[];
// 	int	tab5[];
// 	int	tab6[];
// 	int	tab7[];

// 	tab1[] = {};
// 	tab2[] = {1};
// 	tab3[] = {1, 2};
// 	tab4[] = {2, 1};
// 	tab5[] = {1, 2, 3, 4, 5};
// 	tab6[] = {5, 4, 3, 2, 1};
// 	tab7[] = {1, 2, 3, 2, 1};
// 	printf("Tableau vide: ");
// 	ft_sort_int_tab(tab1, 0);
// 	for (int i = 0; i < 0; i++)
// 	{
// 		printf("%d ", tab1[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille 1: ");
// 	ft_sort_int_tab(tab2, 1);
// 	for (int i = 0; i < 1; i++)
// 	{
// 		printf("%d ", tab2[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille 2 déjà trié: ");
// 	ft_sort_int_tab(tab3, 2);
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("%d ", tab3[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille 2 non trié: ");
// 	ft_sort_int_tab(tab4, 2);
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("%d ", tab4[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille supérieure à 2 déjà trié: ");
// 	ft_sort_int_tab(tab5, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", tab5[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille supérieure à 2 non trié: ");
// 	ft_sort_int_tab(tab6, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", tab6[i]);
// 	}
// 	printf("\n");
// 	printf("Tableau de taille supérieure à 2 avec éléments non uniques: ");
// 	ft_sort_int_tab(tab7, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", tab7[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
