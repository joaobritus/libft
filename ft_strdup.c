/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:50:39 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/08 14:34:14 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*zas;

	i = 0;
	zas = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (zas == NULL)
		return (0);
	while (s[i])
	{
		zas[i] = s[i];
		i++;
	}
	zas[i] = '\0';
	return (zas);
}
