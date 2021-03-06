/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 20:56:04 by pdelobbe          #+#    #+#             */
/*   Updated: 2015/11/13 19:05:49 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum_str(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9')
			&& !(s[i] >= 'A' && s[i] <= 'Z')
			&& !(s[i] >= 'a' && s[i] <= 'z'))
			return (0);
		++i;
	}
	return (1);
}
