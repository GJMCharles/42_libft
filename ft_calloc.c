/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grcharle <grcharle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 01:49:34 by grcharle          #+#    #+#             */
/*   Updated: 2025/05/02 09:33:15 by grcharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;

	if (!nmemb || !size)
	{
		return (0);
	}
	alloc = malloc(size * nmemb);
	if (!alloc)
	{
		return (0);
	}
	ft_bzero(alloc, nmemb);
	return (alloc);
}
