/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:56:31 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/07 13:26:03 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

long long			ft_atoi(const char *str);

int					ft_isdigit(char *c);

void				print_element_a(int content);

void				print_element_b(int content);

void				ft_lstiter(t_list *lst, void (*f)(int));

void				ft_lstadd_back(t_list **lst, t_list *new);

t_list				*ft_lstnew(int content);

void				push_a(t_list **listA, t_list **listB);

void				push_b(t_list **listB, t_list **listA);

void				ra_rb(t_list **listA, char c);

void				sa_sb(t_list **listA, char c);

void				rra_rrb(t_list **list, char c);

void				reverse_rotate_a(t_list **listA);

void				reverse_rotate_b(t_list **listB);

void				ft_putchar(char c);

void				ft_swap(int *tab, int i);

int					ft_sort_int_tab(int *tab, int size);

int					ft_get_mediane(t_list *list);

int					ft_strlen(int *str);

int					ft_lst_size(t_list *lst);

void				sort_pile_3(t_list **pile, char a);

void				sort_pile_5(t_list **list_a, t_list **list_b);

void				sort_pile_4(t_list **list_a, t_list **list_b);

void				sort_pile_5(t_list **list_a, t_list **list_b);

void				sort_pile_2(t_list **list_a, char c);

int					ft_parsing_1(int argc, char **argv);

int					ft_parsing_2(int argc, char **argv, t_list **list_a);

void				ft_put_val_top(t_list **list, int value, char c);

int					ft_getpos(t_list *list, int value);

int					ft_get_mediane(t_list *list);

int					is_sorted(t_list *list);

void				push_elements(t_list **list_a, t_list **list_b);

int					ft_free(t_list **pile_a);

int					find_min_in_list(t_list *listB);

int					ft_getpos(t_list *list, int value);

void				ft_put_val_top(t_list **list, int value, char c);

void				ft_bigtri(t_list **list_a, t_list **list_b);

int					get_best_moves(t_list *list_a, t_list *list_b);

int					get_tmp(int tmp, int size_b, int size_a, int i);

long				ft_get_majorant_value(long number, t_list *list);
void				move_nodes(t_list **list_a, t_list **list_b, int max_value,
						t_list *max_node);

#endif