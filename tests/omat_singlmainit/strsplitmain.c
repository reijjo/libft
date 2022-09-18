/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplitmain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:46:51 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/16 14:34:30 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**sanat;

	sanat = ft_strsplit("*hello*fellow***students*", '*');
	while (*sanat != 0)
	{
		ft_putstr(*sanat);
		ft_putstr(", ");
		sanat++;
	}
	return (0);
}
