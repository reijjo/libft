/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlst_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:40:48 by taitomer          #+#    #+#             */
/*   Updated: 2021/12/03 14:59:36 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

void	ft_printlist(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		ft_putchar('\n');
		list = list->next;
	}
}

void	ft_del(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

int	main(void)
{
//	FT_LSTNEW
	printf("	FT_LSTNEW\n");
	t_list	*lstnew;
	char	new1[] = "eka:	Terve!";
	char	new2[] = "toka:	Moro!";

	lstnew = ft_lstnew(new1, sizeof(new1));
	ft_printlist(lstnew);
	lstnew = ft_lstnew(new2, sizeof(new2));
	ft_printlist(lstnew);

//	FT_LSTDELONE
	printf("\n	FT_LSTDELONE\n");
	t_list	*lstdelone;
	char	eka[] = "Listan eka!";
	char	toka[] = "Listan toka!";

	ft_putstr("Lista:\n");
	lstdelone = ft_lstnew(eka, sizeof(eka));
	ft_lstadd(&lstdelone, ft_lstnew(toka, sizeof(toka)));
	ft_printlist(lstdelone);
	ft_putstr("Lista ft_lstdelone jalkeen:\n");
	ft_lstdelone(&lstdelone, ft_del);
	ft_printlist(lstdelone);

//	FT_LSTDEL
	printf("\n	FT_LSTDEL\n");

//	FT_LSTADD
	printf("\n	FT_LSTADD\n");

//	FT_LSTITER
	printf("\n	FT_LSTITER\n");

//	FT_LSTMAP
	printf("\n	FT_LSTMAP\n");

	return (0);
}
