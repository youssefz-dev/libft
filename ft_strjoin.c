/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:43:02 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/02 12:48:02 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1len;
	size_t	ptrlen;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1len = ft_strlen(s1);
	ptrlen = s1len + ft_strlen(s2) + 1;
	ptr = malloc(sizeof(char) * ptrlen);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, s1len + 1);
	ft_strlcat(&ptr[s1len], s2, ptrlen);
	return (ptr);
}
