/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:17:35 by fatdiall          #+#    #+#             */
/*   Updated: 2022/12/19 11:52:12 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}