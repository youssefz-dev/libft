/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:57:46 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/05 11:45:14 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;
	size_t			i;

	s1ptr = (unsigned char *) s1;
	s2ptr = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1ptr[i] == s2ptr[i] && i < n - 1)
		i++;
	return (s1ptr[i] - s2ptr[i]);
}
