/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:42:51 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/13 22:33:38 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			counter;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	counter = -1;
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (++counter < n)
		if (p_s1[counter] != p_s2[counter])
			return (p_s1[counter] - p_s2[counter]);
	return (0);
}
