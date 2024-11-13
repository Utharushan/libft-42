/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:53:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 15:53:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_space(char c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int	ft_atoi(char *s)
{
	int	atoi;
	int	i;
	int sign;

	atoi = 0;
	i = 0;
	sign = 1;

	while (is_space(s[i]))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (48 <= s[i] && s[i] <= 57)
	{
		atoi = atoi * 10 + (s[i] - 48);
		i++;
	}
	return (sign * atoi);
}
