/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:29:55 by fatdiall          #+#    #+#             */
/*   Updated: 2023/03/14 18:01:15 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_string(int n, int len)
{
	char	*result;

	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	len--;
	while (n > 0)
	{
		result[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_itoa_len(n);
	return (ft_itoa_string(n, len));
}

/*int	main(void)
{
	int	i;
	char		*test;

	i = 8;
	test = ft_itoa(i);
	printf("%s\n", test);
	free(test);
	return (0);
}*/
