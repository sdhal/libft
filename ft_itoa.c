/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:22:49 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 15:22:10 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	if (n == 0)
		return (0);
	return (get_num_len(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	int		len_n;
	char	*p_array;
	long	long_n;

	long_n = n;
	len_n = get_num_len(long_n) + 1;
	if (long_n < 1)
		len_n++;
	p_array = malloc(len_n);
	if (p_array == NULL)
		return (NULL);
	p_array[--len_n] = '\0';
	if (long_n == 0)
		return (p_array[0] = '0', p_array);
	else if (long_n < 0)
	{
		p_array[0] = '-';
		long_n = -long_n;
	}
	while (len_n-- && long_n > 0)
	{
		p_array[len_n] = (long_n % 10) + '0';
		long_n /= 10;
	}
	return (p_array);
}
