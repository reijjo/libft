/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoamain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:00:55 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/18 11:05:10 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(777));
	printf("%s\n", ft_itoa(-777));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s", ft_itoa(-0));
	return (0);
}
