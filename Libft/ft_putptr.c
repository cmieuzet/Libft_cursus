/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:13:09 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 14:33:27 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putptr(void *ptr)
{
	char	*hexa;
	int		len;

	hexa = "0123456789abcdef";
	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	write(1, "0x", 2);
	len = ft_puthexa((unsigned long long) ptr, hexa);
	return (len + 2);
}
