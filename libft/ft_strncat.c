/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:36:38 by agusev            #+#    #+#             */
/*   Updated: 2019/02/13 11:41:04 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *des;

	des = s1;
	while (*des != '\0')
		des++;
	while (*s2 && (n != 0))
	{
		*des = *s2;
		des++;
		s2++;
		n--;
	}
	*des = '\0';
	return (s1);
}