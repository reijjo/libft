/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsetmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:27:06 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/02 14:52:35 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define PITUUS 28

int	main(void)
{
	char	lause[PITUUS] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	ft_putstr(lause);
	ft_memset(lause, 'a', 3);
	ft_putstr(lause);
	ft_memset(lause + 3, 'b', 3);
	ft_putstr(lause);
	ft_memset(lause, '7', sizeof(lause));
	ft_putstr(lause);
	return (0);
}
