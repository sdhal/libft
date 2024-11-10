/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:00:00 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 11:39:14 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*p_joined_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2) + 1;
	p_joined_str = malloc(len_s1 + len_s2);
	if (p_joined_str == NULL)
		return (NULL);
	ft_memmove(p_joined_str, s1, len_s1);
	ft_memmove(p_joined_str + len_s1, s2, len_s2);
	return (p_joined_str);
}
