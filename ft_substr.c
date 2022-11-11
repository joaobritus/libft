/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:39:19 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/08 14:42:18 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	y;
	char	*zas;

	zas = (char *)malloc((len + 1) * sizeof(char const));
	if (!zas)
		return (NULL);
	i = 0;
	y = 0;
	while (s[i])
	{
		if (i >= start && y < len)
		{
			zas[y] = s[i];
			y++;
		}
		i++;
	}
	zas[y] = '\0';
	return (zas);
}
