/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:38:19 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 12:13:42 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	counter;
	char	*p_trimmed_str;

	if (s1 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	if (len_s1 == 0)
		return (ft_strdup(""));
	else if (set == NULL || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	counter = 0;
	while (ft_strchr((const char *)set, s1[counter]))
		counter++;
	while (ft_strchr((const char *)set, s1[--len_s1]) && len_s1)
		;
	if (counter <= len_s1)
	{
		p_trimmed_str = (char *)ft_calloc(1, len_s1 - counter + 2);
		if (!p_trimmed_str)
			return (p_trimmed_str);
	}
	else
		return (ft_strdup(""));
	return (ft_memmove(p_trimmed_str, s1 + counter, len_s1 - counter + 1));
}
