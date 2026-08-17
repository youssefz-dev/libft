/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:55:51 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/04 18:53:12 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	s1ptr = (unsigned char *) s1;
	s2ptr = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1ptr[i] && s2ptr[i] && s1ptr[i] == s2ptr[i] && i < n - 1)
		i++;
	return (s1ptr[i] - s2ptr[i]);
}
