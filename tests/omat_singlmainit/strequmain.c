/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:46:43 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/11 13:49:56 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
1
int	main(void)
{
	char	lause1[] = "sama";
	char	lause2[] = "eri";

	printf("Sama: %d\n", ft_strequ(lause1, lause1));
	printf("Eri: %d", ft_strequ(lause1, lause2));
	return (0);
}
