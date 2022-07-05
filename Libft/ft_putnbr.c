/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:02:33 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 14:06:46 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		len += ft_putstr("-2147483648");
		return (len);
	}
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= (-1);
	}
	if (nbr > 9)
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putchar(nbr % 10 + '0');
	}
	else
		len += ft_putchar(nbr + 48);
	return (len);
}
