/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:34:46 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 15:19:14 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dest = malloc(sizeof(char) * (i + j + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	free(s1);
	return (dest);
}
