/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grcharle <grcharle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:14:50 by grcharle          #+#    #+#             */
/*   Updated: 2025/05/02 11:36:39 by grcharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	ret;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	ret = src_len + dest_len;
	if (n < dest_len)
		ret = src_len + n;
	if (!src || (src_len + n) < dest_len)
		return (ret);
	i = 0;
	while (src && src[i] && (dest_len + i) < (n - 1))
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	if (n > dest_len)
	{
		dest[dest_len + i] = '\0';
	}
	return (ret);
}
