/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:32:40 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/08 17:01:05 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n = (n / 10);
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*zas;

	i = length(n);
	zas = (char *)malloc((i + 1) * sizeof(char));
	if (!zas)
		return (NULL);
	zas[i] = '\0';
	i--;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		zas[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		zas[i] = (n % 10) + 48;
		n = (n / 10);
		i--;
	}
	if (n >= 0 && n <= 9)
	{
		zas[i] = n + 48;
	}
	return (zas);
}
