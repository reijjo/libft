/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isasciimain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:59:30 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 10:03:25 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_isascii('a'));
	printf("%c\n", ft_isascii('0'));
	printf("%c\n", ft_isascii('@'));
	printf("%c\n", ft_isascii(167));
	printf("%c\n", ft_isascii(36));
	printf("%c\n", ft_isascii(243));
	printf("%c\n", ft_isascii(82));
	printf("%c\n", ft_isascii(101));
	printf("%c\n", ft_isascii(112));
	printf("%c\n", ft_isascii(69));
	printf("%c\n", ft_isascii(128));
	printf("%c\n", ft_isascii(33));
	return (0);
}
