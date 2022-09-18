/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnummain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:28:00 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/09 09:34:39 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_isalnum('p'));
	printf("%c\n", ft_isalnum('5'));
	printf("%c\n", ft_isalnum('z'));
	printf("%c\n", ft_isalnum('B'));
	printf("%c\n", ft_isalnum('{'));
	printf("%c\n", ft_isalnum('q'));
	printf("%c\n", ft_isalnum('-'));
	printf("%c\n", ft_isalnum('A'));
	printf("%c\n", ft_isalnum('0'));
	printf("%c\n", ft_isalnum('+'));
	printf("%c\n", ft_isalnum('3'));
	return (0);
}
