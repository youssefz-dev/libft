/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:54:52 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/05 10:55:43 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	if (src == dst)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	dstptr = (unsigned char *) dst;
	srcptr = (unsigned char *) src;
	len--;
	while ((int) len >= 0)
	{
		dstptr[len] = srcptr[len];
		len--;
	}
	return (dst);
}
