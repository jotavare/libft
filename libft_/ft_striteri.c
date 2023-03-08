/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:09:29 by jotavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:09:32 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}

/*void	ft_test(unsigned int i, char *str)
	{
		*str += i;
	}
int	main()
{
	char	str[] = "aBcDeF";
	ft_striteri(str, ft_test);
	ft_putendl_fd(str, 1);
}*/
