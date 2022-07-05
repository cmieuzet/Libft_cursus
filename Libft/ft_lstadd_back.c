/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:00:06 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/04/18 15:25:38 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new = NULL;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
/*
int	main()
{
	t_list	*lst;
	t_list	first;
	t_list	second;
	t_list	third;

	lst = &first;
	lst->content = "a";
	lst->next = &second;
	second.content = "b";
	second.next = NULL;
	third.content = "c";
	third.next = NULL;
	ft_lstadd_back(&lst, &third);

	while (lst != NULL)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/
