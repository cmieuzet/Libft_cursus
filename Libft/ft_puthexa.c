/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:27:14 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 14:28:49 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_puthexa(unsigned long long nb, char *str)
{
	int	len;

	len = 0;
	if (nb >= (unsigned long long)ft_strlen(str))
	{
		len += ft_puthexa(nb / ft_strlen(str), str);
		len += ft_putchar(str[nb % ft_strlen(str)]);
	}
	else
		len += ft_putchar(str[nb]);
	return (len);
}
