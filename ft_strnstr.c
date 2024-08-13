/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:06:55 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 21:06:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int n)
{
	int	i;
	int	len_needle;

	if (*needle == '\0')
		return (haystack);
	len_needle = ft_strlen(needle);
	if (len_needle > n)
		return (NULL);
	i = 0;
	while (haystack[i] && (i + len_needle <= n))
	{
		if (ft_strncmp(&haystack[i], needle, len_needle) == 0)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}