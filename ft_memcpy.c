/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:35:40 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/11 19:46:33 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	if (dst == 0 && src == 0)
		return (0);
	p_dst = (char *)dst;
	p_src = (const char *)src;
	while (n--)
		*p_dst++ = *p_src++;
	return (dst);
}
