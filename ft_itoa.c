/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:48:53 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/01 18:45:09 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (++i);
	if (nbr < 0)
		nbr *= -(++i);
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		ptrlen;
	long	nbr;

	nbr = n;
	ptrlen = ft_intlen(nbr);
	ptr = malloc(sizeof(char) * (ptrlen + 1));
	if (!ptr)
		return (0);
	if (nbr < 0)
		nbr *= -1;
	ptr[ptrlen--] = '\0';
	while (ptrlen >= 0)
	{
		ptr[ptrlen--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
