/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dienasci <diego.nascimentomartins2@gmail.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:16:02 by dienasci          #+#    #+#             */
/*   Updated: 2021/08/12 21:16:03 by dienasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		index;
	int		aux;

	index = 0;
	while (s[index])
		index++;
	dup = (char *)malloc(index + 1);
	if (dup == NULL)
		return (NULL);
	aux = 0;
	while (s[aux])
	{
		dup[aux] = s[aux];
		aux++;
	}
	dup[aux] = '\0';
	return (dup);
}
