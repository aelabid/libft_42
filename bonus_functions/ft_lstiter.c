/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:01:17 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/16 18:42:17 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void f(void *c)
{
	ft_memcpy(c, "asmaa", 4);
}
int main()
{
	t_list *head = malloc(sizeof(t_list));
	head->content = ft_strdup("hello");
	head->next = NULL;

	t_list *node1 = malloc(sizeof(t_list));
	node1->content = ft_strdup("world");
	node1->next = NULL;
	head->next = node1;
	ft_lstiter(head, f);
	while (head != NULL)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}
}
