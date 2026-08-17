/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:54:44 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/04 18:38:29 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	haylen;

	if (!haystack && needle && !len)
		return (0);
	i = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	haylen = ft_strlen(haystack);
	if (len > haylen)
		len = haylen;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
