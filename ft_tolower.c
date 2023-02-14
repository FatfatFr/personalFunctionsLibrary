/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:26:18 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/14 16:07:47 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*int	main(void)
{
	printf("%c\n", ft_tolower('B'));
	return (0);
}*/