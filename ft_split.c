/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:03:18 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/15 18:47:30 by jaragao-         ###   ########.fr       */
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

void	short(char **str, char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (s[i] != c)
	{
		counter++;
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			str[y] = (char *)malloc((counter + 1) * sizeof(char));
			if (!str)
				return (NULL);
		}
	}
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
					str[y][z++] = s[i++];
				str[y++][z] = '\0';
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
