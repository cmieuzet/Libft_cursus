/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:46 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 14:11:40 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_uns(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
	{
		len += ft_putnbr_uns(nbr / 10);
		len += ft_putchar(nbr % 10 + '0');
	}
	else
		len += ft_putchar(nbr + 48);
	return (len);
}
