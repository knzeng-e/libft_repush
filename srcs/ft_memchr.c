/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 04:36:05 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/04/28 23:14:36 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	//char	*str;

	if (s)
	{
		//str = (char *)s;
		i = 0;
		while (n--)
		{
			if (*(unsigned *)(s + i) == (unsigned)c)
				return ((unsigned *)(s + i));
			i++;
		}
	}
	return (NULL);
}
