/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:52:13 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/09 12:36:26 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!dest || !src)
		return (0);
	while (src[j] && j < size - 1 && size > 0)
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}