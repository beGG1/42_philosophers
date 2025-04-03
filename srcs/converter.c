/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 02:30:47 by sshabali          #+#    #+#             */
/*   Updated: 2025/04/03 03:08:04 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	ft_toul(const char *nptr)
{
	int		i;
	long	res;

	i = 0;
	res = 0;
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (-1);
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	if (res > __INT_MAX__)
		return (-1);
	return (res);
}