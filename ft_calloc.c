/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:08:11 by jaragao-          #+#    #+#             */
/*   Updated: 2022/11/08 14:17:33 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	array = (void *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb);
	return (array);
}
