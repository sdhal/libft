/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:33:32 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 19:03:43 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ne, size_t len)
{
	size_t	len_needle;
	size_t	iterator_hay;
	size_t	iterator_len;

	iterator_hay = -1;
	iterator_len = -1;
	if (!*ne)
		return ((char *)hay);
	len_needle = ft_strlen(ne);
	while (++iterator_len < len && hay[++iterator_hay])
		if (hay[iterator_hay] == *ne && (iterator_len + len_needle) <= len)
			if (ft_strncmp(hay + iterator_hay, ne, len_needle) == 0)
				return ((char *)hay + iterator_hay);
	return (NULL);
}
