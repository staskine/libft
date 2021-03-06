/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:14:32 by staskine          #+#    #+#             */
/*   Updated: 2021/12/03 10:18:12 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespc(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == ',')
		return (1);
	else
		return (0);
}
