/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpymain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:56:26 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 14:00:32 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#define PITUUS 50

int	main(void)
{
	char	originaali[PITUUS] = "Woopwoop!";
	char	kopio[PITUUS] = "WHATWHATWHAAAAT";

	printf("ORIGINAL %s\n", originaali);
	printf("COPY %s\n", kopio);
	ft_strcpy(kopio, originaali);
	printf("COPY AFTER STCRCPY %s", kopio);
	return (0);
}
