/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:39:25 by snakita           #+#    #+#             */
/*   Updated: 2021/10/16 18:39:28 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	str = (char *)malloc(lens1 + lens2 + 1);
	if (str)
	{
		ft_memcpy(str, s1, lens1);
		ft_memcpy(str + lens1, s2, lens2 + 1);
		return (str);
	}
	return (NULL);
}
