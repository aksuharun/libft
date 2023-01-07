/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haksu <haksu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:28:09 by haksu             #+#    #+#             */
/*   Updated: 2022/12/25 18:28:09 by haksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numofcol(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			wc++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wc);
}

size_t	ft_sizeofline(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_ww(char **list, char const *s, size_t wc, char c)
{
	size_t	i;
	size_t	j;
	size_t	w_i;
	size_t	wl;

	i = 0;
	w_i = 0;
	while (w_i < wc)
	{
		while (s[i] == c)
			i++;
		wl = ft_sizeofline(s + i, c);
		list[w_i] = (char *)malloc(wl + 1);
		j = 0;
		while (j < wl)
			list[w_i][j++] = s[i++];
		list[w_i][j] = 0;
		w_i++;
	}
	list[w_i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**list;

	if (!s)
		return (0);
	wc = ft_numofcol(s, c);
	list = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!list)
		return (0);
	ft_ww(list, s, wc, c);
	return (list);
}
