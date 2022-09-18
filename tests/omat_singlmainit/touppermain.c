/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touppermain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:36:24 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 10:37:47 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper(97));
	printf("%c\n", ft_toupper('b'));
	printf("%c\n", ft_toupper('~'));
	printf("%c\n", ft_toupper(109));
	printf("%c\n", ft_toupper('o'));
	printf("%c\n", ft_toupper(105));
	printf("%c\n", ft_toupper(219));
	printf("%c\n", ft_toupper(43));
	printf("%c\n", ft_toupper(49));
	return (0);
}
