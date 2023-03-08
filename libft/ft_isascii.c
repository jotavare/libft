/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:52:28 by jotavare          #+#    #+#             */
/*   Updated: 2022/11/22 17:52:30 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main()
{
	ft_putnbr_fd(ft_isascii(50), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(100), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(190), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(200), 1);
	ft_putchar_fd('\n', 1);
}*/
