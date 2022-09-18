/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprintmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:16:43 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 10:21:41 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_isprint(33));
	printf("%c\n", ft_isprint(77));
	printf("%s%c%s\n", "SPACE", ft_isprint(32), "TESTI");
	printf("%c\n", ft_isprint(212));
	printf("%c\n", ft_isprint(126));
	printf("%c\n", ft_isprint(10));
	printf("%c\n", ft_isprint(42));
	printf("%c\n", ft_isprint(84));
	printf("%c\n", ft_isprint(94));
	return (0);
}
