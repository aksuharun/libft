/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haksu <haksu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:27:16 by haksu             #+#    #+#             */
/*   Updated: 2022/12/25 18:27:16 by haksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)b;
	while (i < len)
	{
		arr[i++] = c;
	}
	return (arr);
}
