/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolowermain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:50:21 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 10:54:21 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower(65));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", ft_tolower('~'));
	printf("%c\n", ft_tolower(77));
	printf("%c\n", ft_tolower('O'));
	printf("%c\n", ft_tolower(73));
	printf("%c\n", ft_tolower(219));
	printf("%c\n", ft_tolower(43));
	printf("%c\n", ft_tolower(49));
	return (0);
}
