/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 22:19:11 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/04/28 17:58:49 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] || s2[i])
		{
			if (s1[i] != s2[i])
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			i++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((s1 != NULL) - (s2 != NULL));
}
