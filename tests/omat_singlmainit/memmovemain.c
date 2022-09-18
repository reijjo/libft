/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmovemain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:02:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 10:06:50 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	lause1[] = "ONKS OLLU MITAAN?";
	char	lause2[] = "aika hiljasta";
	char	lause3[] = "MURSU MARSU ???";

	printf("lause1 = %s\n", lause1);
	printf("lause2 = %s\n", lause2);
	printf("lause3 = %s\n", lause3);
	ft_memmove(lause1, lause2, 5);
	ft_memmove(lause3, &lause3[6], 5);
	printf("%s\n", lause1);
	printf("%s", lause3);
	return (0);
}
