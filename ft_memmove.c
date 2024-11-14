/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:38:59 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 23:38:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	const unsigned char	*src_ptr;

	dst = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dst < src_ptr)
	{
		while (n--)
		{
			*dst = *src_ptr;
			dst++;
			src_ptr++;
		}
	}
	else
	{
		dst += n;
		src_ptr += n;
		while (n--)
			*(--dst) = *(--src_ptr);
	}
	return (dest);
}
