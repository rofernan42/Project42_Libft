/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:34:16 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/07 17:47:28 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (ft_strlen(src) + j);
}
