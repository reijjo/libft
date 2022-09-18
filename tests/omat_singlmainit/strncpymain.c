/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpymain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:54:41 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/05 09:58:05 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	originaali[] = "Woopwoop!";
	char	kopio[] = "WHATWHATWHAAAAT";

	printf("Normi: %s\n", originaali);
	printf("Copy: %s\n", kopio);
	ft_strncpy(kopio, originaali, 5);
	printf("Copy (5) jalkeen: %s", kopio);
	return (0);
}
