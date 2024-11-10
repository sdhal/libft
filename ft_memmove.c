/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:58:37 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/13 18:50:52 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = (char *)dst;
	p_src = (const char *)src;
	if (p_dst < p_src)
		while (n--)
			*p_dst++ = *p_src++;
	else if (p_dst > p_src)
		while (n--)
			p_dst[n] = p_src[n];
	return (dst);
}
