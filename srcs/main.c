/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 01:11:12 by sshabali          #+#    #+#             */
/*   Updated: 2025/04/03 03:10:01 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/philo.h"

int	proccess_args(int argc, char **argv, t_philo *p)
{
	int	temp;
	
	temp = ft_toul(argv[1]);
	if (temp == -1)
		return (0);
	p->n_philo = temp;
	temp = ft_toul(argv[2]);
	if (temp == -1)
		return (0);
	p->ttd = temp;
	temp = ft_toul(argv[3]);
	if (temp == -1)
		return (0);
	p->tte = temp;
	temp = ft_toul(argv[4]);
	if (temp == -1)
		return (0);
	p->tts = temp;
	if (argc == 6)
	{
		temp = ft_toul(argv[5]);
		if (temp == -1)
			return (0);
		p->n_meals = temp;
	}
	return  (1);
}

int	main(int argc, char **argv)
{
	t_philo	*p;

	if (argc < 5 || argc > 6)
	{
		printf("Allowed number of arguments is 4 and 5\n");
		return (1);
	}
	p = (t_philo *)malloc(sizeof(t_philo));
	if (!proccess_args(argc, argv, p))
	{
		printf("Failed to proccess arguments. Your number is not positive int\n");
		free(p);
		return (1);
	}
	return (0);
}
