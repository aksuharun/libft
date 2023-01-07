/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haksu <haksu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:26:33 by haksu             #+#    #+#             */
/*   Updated: 2022/12/25 18:26:33 by haksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitcount(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i = 1;
	}
	while (c)
	{
		c = c / 10;
		i++;
		if (c == 0)
			break ;
	}
	return (i);
}

char	*numconfg(int n, int strlen, int num, char *str)
{
	while (strlen >= 0)
	{
		num = n % 10;
		str[strlen--] = num + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		strlen;
	char	*str;
	int		num;
	int		sign;

	strlen = digitcount(n);
	num = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * strlen + 1);
	if (!str)
		return (0);
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign *= -1;
	}
	str[strlen--] = '\0';
	numconfg(n, strlen, num, str);
	if (sign == -1 && str[0] == '0')
		str[0] = '-';
	return (str);
}
