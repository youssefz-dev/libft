/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:35:30 by yzoullik          #+#    #+#             */
/*   Updated: 2024/10/31 13:17:26 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	s1len;

	s1len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (s1len + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, s1len + 1);
	return (ptr);
}
