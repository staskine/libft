/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:56:39 by staskine          #+#    #+#             */
/*   Updated: 2021/12/09 14:12:43 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_strim(char const *s)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] == '\0' || ft_iswhitespc(s[i]) == 1)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	len = ft_strlen(s);
	while (s[len] == '\0' || ft_iswhitespc(s[len]) == 1)
		len--;
	if (len <= i)
		return (-1);
	return (len - i + 1);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	length;
	size_t	copy;
	size_t	orig;

	length = len_strim(s);
	str = ft_memalloc(length + 1);
	if (!str)
		return (NULL);
	copy = 0;
	orig = 0;
	while (s[orig] != '\0' && ft_iswhitespc(s[orig]) == 1)
		orig++;
	while (length > copy && length != 0)
	{
		str[copy] = s[orig];
		copy++;
		orig++;
	}
	str[copy] = '\0';
	return (str);
}
