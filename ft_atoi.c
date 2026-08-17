/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:36:09 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/05 11:53:20 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_signal(char c, int *signal, size_t *i)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			(*signal) = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	res;
	long	temp;
	int		signal;

	i = 0;
	res = 0;
	signal = 1;
	while ((str[i] && str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	ft_signal(str[i], &signal, &i);
	while (str[i] && ft_isdigit(str[i]))
	{
		temp = res;
		res = (res * 10) + (str[i++] - 48);
		if (res / 10 != temp && signal == -1)
			return (0);
		if (res / 10 != temp && signal == 1)
			return (-1);
	}
	return (res * signal);
}
