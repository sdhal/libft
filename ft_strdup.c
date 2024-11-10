/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:44:04 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 13:05:50 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	void	*p;

	len_s1 = ft_strlen(s1) + 1;
	p = ft_calloc(sizeof(char), len_s1);
	if (p == NULL)
		return (NULL);
	return (ft_memmove(p, s1, len_s1));
}
