/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:00:08 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 23:00:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*temp;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	temp = (char *)ptr;
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
