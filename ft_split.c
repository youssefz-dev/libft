/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:55:22 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/04 18:27:45 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_chrcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			j++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			return (j);
		i++;
	}
	return (j);
}

static int	ft_solve(char const *s, char c, char *str, char **ptr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (j == 0 && s[i] != c)
		{
			str = malloc(sizeof(char) * (ft_chrcount(&s[i], c) + 1));
			if (!str)
				return (0);
		}
		if (s[i] != c)
			str[j++] = s[i];
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			str[j] = '\0';
			*ptr++ = str;
			j = 0;
		}
		i++;
	}
	*ptr = 0;
	return (1);
}

static void	ft_free(char *str, char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	ptr = 0;
	free(str);
	str = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;

	if (!s)
		return (0);
	ptr = malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (!ptr)
		return (0);
	str = 0;
	if (!ft_solve(s, c, str, ptr))
	{
		ft_free(str, ptr);
		return (0);
	}
	return (ptr);
}
