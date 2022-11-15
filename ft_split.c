/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:03:18 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/08 16:08:02 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**wordnumber(char const *s, char c)
{
	int		i;
	int		y;
	char	**str;

	i = 0;
	y = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			y++;
		i++;
	}
	str = (char **)malloc((y + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		y;
	int		z;
	int		counter;

	str = wordnumber(s, c);
	i = 0;
	y = 0;
	z = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				str[y] = (char *)malloc((counter + 1) * sizeof(char));
				if (!str)
					return (NULL);
				i -= (counter - 1);
				counter += i;
				while (i < counter)
				{
					str[y][z] = s[i];
					z++;
					i++;
				}
				str[y][z] = '\0';
				y++;
				z = 0;
				counter = 0;
				i--;
			}
		}
		i++;
	}
	str[y] = NULL;
	return (str);
}
