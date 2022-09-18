/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcatmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:30:33 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/05 09:57:38 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	eka[] = "KURA";
	char	toka[] = "PERSE!";

	printf("Eka: %s\n", eka);
	printf("Toka: %s\n", toka);
	ft_strcat(eka, toka);
	printf("Yhessa: %s", eka);
	return (0);
}
