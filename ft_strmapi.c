/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:24:52 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 15:35:36 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*p_strmap;

	counter = -1;
	p_strmap = ft_calloc(1, ft_strlen(s) + 1);
	if (p_strmap == NULL)
		return (p_strmap);
	while (s[++counter])
		p_strmap[counter] = f(counter, s[counter]);
	return (p_strmap);
}
