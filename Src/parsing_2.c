/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:34:16 by mhajji-b          #+#    #+#             */
/*   Updated: 2023/02/06 19:13:30 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoi(const char *str)
{
	unsigned long	i;
	long			sign;
	long			res;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}

int	ft_isdigit(char *c)
{
	int	i;

	if (c[0] == '-' && c[1])
		i = 1;
	else
		i = 0;
	while (c[i])
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
