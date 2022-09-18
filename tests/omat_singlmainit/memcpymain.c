/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpymain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:08:22 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/02 17:22:20 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define PITUUS 50

int	main(void)
{
	char	originaali[PITUUS] = "MoROooTERRVEEEE!\n";
	char	kopio[PITUUS] = "";

	ft_putstr(originaali);
	ft_memcpy(kopio, originaali, 5);
	ft_putstr(kopio);
	return (0);
}
