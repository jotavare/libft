/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:14:59 by jotavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:15:00 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main()
{
	ft_putchar_fd(ft_tolower('C'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('z'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('4'), 1);
	ft_putchar_fd('\n', 1);
}*/
