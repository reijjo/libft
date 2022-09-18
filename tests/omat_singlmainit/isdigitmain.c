/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigitmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:09:49 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 09:14:03 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_isdigit('0'));
	printf("%c\n", ft_isdigit('+'));
	printf("%c\n", ft_isdigit('6'));
	printf("%c\n", ft_isdigit('9'));
	printf("%c\n", ft_isdigit('t'));
	printf("%c\n", ft_isdigit('h'));
	printf("%c\n", ft_isdigit('3'));
	return (0);
}
