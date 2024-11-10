/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:43:16 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 14:31:51 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	number;

	is_negative = 1;
	number = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\f'
			|| *str == '\t' || *str == '\r' || *str == '\v'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		number = number * 10 + (*str++ - '0');
	return (is_negative * number);
}
