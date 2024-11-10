/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:13:58 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 20:24:52 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	word_count;
	int	word_flag;

	word_flag = 0;
	word_count = 0;
	while (*s)
	{
		if (*s == c)
			word_flag = 0;
		else if (!word_flag)
		{
			word_flag = 1;
			word_count++;
		}
		s++;
	}
	return (word_count);
}

static int	ft_split_words(const char **s, char **p_array, int *counter, char c)
{
	const char	*start;
	const char	*end;

	while (**s == c)
		(*s)++;
	start = *s;
	end = start;
	while (*end && *end != c)
		end++;
	if (end > start)
	{
		p_array[*counter] = ft_substr(start, 0, end - start);
		if (!p_array[*counter])
			return (0);
		(*counter)++;
		*s = end;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**p_array;
	int		word_count;
	int		counter;

	counter = 0;
	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	p_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!p_array)
		return (NULL);
	while (*s)
	{
		if (!ft_split_words(&s, p_array, &counter, c))
		{
			while (counter > 0)
				free(p_array[--counter]);
			free(p_array);
			return (NULL);
		}
	}
	p_array[counter] = NULL;
	return (p_array);
}
