/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 09:01:51 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/06/07 10:24:13 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.hpp"

t_list	*ft_lstttshivhu(void const *content, size_t content_size)
{
	t_list *ttshivhu;

	if (!(ttshivhu = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ttshivhu->content = NULL;
		ttshivhu->content_size = 0;
	}
	else
	{
		if (!(ttshivhu->content = malloc(sizeof(content_size))))
			return (NULL);
		ttshivhu->content = ft_memcpy(ttshivhu->content, content, content_size);
		ttshivhu->content_size = content_size;
	}
	ttshivhu->next = NULL;
	return (ttshivhu);
}
