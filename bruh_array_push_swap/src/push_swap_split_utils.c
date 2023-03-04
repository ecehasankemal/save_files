/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_split_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:13:54 by hece              #+#    #+#             */
/*   Updated: 2023/03/02 20:32:54 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t
	ft_ps_strlen(char **str)
{
	register size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

size_t
	ft_strlen(const char *str)
{
	register size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

size_t
	ft_strlcpy(char *dest, const char *src, size_t size)
{
	register size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}
