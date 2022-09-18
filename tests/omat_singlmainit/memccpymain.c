/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpymain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:19:48 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/03 14:16:24 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define PITUUS 50

int	main(void)
{
	char	original[PITUUS] = "huhhuh eipa!\n";
	char	kopio[PITUUS] = "\n";

	ft_putstr(original);
	ft_memccpy(kopio, original, 'i', 10);
	ft_putstr(kopio);
	ft_putstr("\n");
	ft_memccpy(kopio, original, 'z', sizeof(original));
	ft_putstr(kopio);
	return (0);
}
