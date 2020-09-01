/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:33:45 by arlaine           #+#    #+#             */
/*   Updated: 2018/12/23 16:42:59 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if ((ft_strlen(s1) == 0 && ft_strlen(s2) == 0) || !n)
		return (1);
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] == s2[i]);
}
