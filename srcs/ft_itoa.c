/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 05:11:00 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/04/01 05:19:25 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_zero_or_min(int number)
{
	char	*str;

	if (number == 0)
		str = ft_strdup("0");
	else
		str = ft_strdup("-2147483648");
	return (str);
}

static char		*str_size(char **str, int *not_neg, size_t *i)
{
	*i = 0;
	*not_neg = 1;
	if (!((*str) = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	return (*str);
}

char			*ft_itoa(int nbr)
{
	int		pos;
	size_t	i;
	char	*str_number;

	if (!(str_size(&str_number, &pos, &i)))
		return (NULL);
	if (nbr == 0 || nbr == -2147483648)
		return (ft_zero_or_min(nbr));
	if (nbr < 0)
	{
		nbr = -nbr;
		pos = 0;
	}
	while (nbr)
	{
		str_number[i] = (nbr) % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	if (!pos)
		str_number[i++] = '-';
	str_number[i] = '\0';
	return (ft_strrev(str_number));
}
