/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striterimain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:57:57 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/18 15:14:31 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_striteri(unsigned int i, char *c)
{
	i = 5;
	*c = *c + i;
}

int	main(void)
{
	void	(*f)(unsigned int, char *);
	char	jep[] = "ABCDEFGHIJKLMNOPQRSTU";

	f = &test_striteri;
	printf("Aluks: %s\n", jep);
	ft_striteri(jep, f);
	printf("Lopuks: %s", jep);
	return (0);
}
