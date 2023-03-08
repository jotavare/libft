/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:52:52 by jotavare          #+#    #+#             */
/*   Updated: 2022/11/22 17:52:55 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main()
{
	ft_putnbr_fd(ft_isprint(45), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint(19), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint(127), 1);
	ft_putchar_fd('\n', 1);
}*/
