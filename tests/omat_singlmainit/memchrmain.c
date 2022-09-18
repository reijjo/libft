/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:16:45 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/04 11:52:36 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	lause1[] = "No mita helvettia?\n";
	char	lause2[] = "Onko taalla?\n";
	char	*vastaus1;
	char	*vastaus2;

	vastaus1 = ft_memchr(lause1, 'h', sizeof(lause1));
	vastaus2 = ft_memchr(lause2, 'z', sizeof(lause2));
	ft_putstr(lause1);
	ft_putstr(lause2);
	ft_putstr(vastaus1);
	ft_putstr(vastaus2);
	return (0);
}
