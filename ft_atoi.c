/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:19:30 by rofernan          #+#    #+#             */
/*   Updated: 2020/09/07 13:19:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			i;
	long int	nb;
	int			sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (str)
	{
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' \
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + str[i++] - '0';
	}
	return (sign * nb);
}
