/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stritermain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:44:29 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/16 14:31:58 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_striter(char *c)
{
	*c = *c + 1;
}

int	main(void)
{
	void (*f)(char*);
	char	teksti[] = "abc";

	f = &test_striter;
	printf("Eka: %s\n", teksti);
	ft_striter(teksti, f);
	printf("Lopuks: %s", teksti);
	return (0);
}
