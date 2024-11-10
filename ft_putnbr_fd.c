/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:50:41 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 16:08:36 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	unb = n;
	if (unb > 9)
		ft_putnbr_fd(unb / 10, fd);
	write(fd, &((char){'0' + unb % 10}), 1);
}
