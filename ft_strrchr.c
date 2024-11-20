/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:40:58 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 20:40:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last_occurrence = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
