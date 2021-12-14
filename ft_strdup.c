/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:27:32 by staskine          #+#    #+#             */
/*   Updated: 2021/11/22 15:15:55 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*des;

	i = 0;
	len = (ft_strlen(src) + 1);
	des = (char *)malloc(len * sizeof(*des));
	if (des == NULL)
	{
		return (0);
	}
	while (i < len)
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
