/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncatmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:04:07 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/10 17:16:30 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define PITUUS 50

int	main(void)
{
	char	eka[PITUUS] = "No huhhuh ";
	char	toka[PITUUS] = "saatana";

	printf("Eka = %s\n", eka);
	printf("Toka = %s\n", toka);
	ft_strncat(eka, toka, 4);
	printf("Kimpassa = %s", eka);
	return (0);
}
