/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:35:55 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 11:00:08 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	void	*p_sub_string;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup(""));
	if (len_s + 1 <= start + len)
		len = len_s - start;
	p_sub_string = ft_calloc(len + 1, sizeof(char));
	if (p_sub_string != NULL)
		return (ft_memmove(p_sub_string, s + start, len));
	return (NULL);
}
