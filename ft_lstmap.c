/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdhal <sdhal@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:05:21 by sdhal             #+#    #+#             */
/*   Updated: 2024/10/14 19:30:38 by sdhal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_node;
	t_list	*map_node;
	void	*node_content;

	if (!lst)
		return (NULL);
	map_node = NULL;
	while (lst)
	{
		node_content = f(lst->content);
		temp_node = ft_lstnew(node_content);
		if (!temp_node)
		{
			del(node_content);
			ft_lstclear(&map_node, del);
			return (NULL);
		}
		ft_lstadd_back(&map_node, temp_node);
		lst = lst->next;
	}
	return (map_node);
}
