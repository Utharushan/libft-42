/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:34:25 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 23:34:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	while (n--)
	{
		*dst = *src_ptr;
		dst++;
		src_ptr++;
	}
	return (dest);
}
