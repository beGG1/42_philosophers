/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 01:11:08 by sshabali          #+#    #+#             */
/*   Updated: 2025/04/03 03:06:21 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_philo {
	int	n_philo;
	int	ttd;
	int	tte;
	int	tts;
	int	n_meals;
}	t_philo;

int	ft_toul(const char *nptr);

#endif
