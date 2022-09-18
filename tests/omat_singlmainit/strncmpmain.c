/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmpmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:30:37 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/10 19:03:23 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*lause1;
	char	*lause2;

	lause1 = "PERKELE";
	lause2 = "PERSAATANA";
	printf("%d\n", ft_strncmp(lause1, lause2, 2));
	printf("%d\n", ft_strncmp(lause1, lause2, 3));
	printf("%d\n", ft_strncmp(lause1, lause2, 5));
	return (0);
}
