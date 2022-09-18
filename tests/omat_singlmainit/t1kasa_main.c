/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eka_kasamain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:59:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/20 12:15:10 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	//	FT_STRLEN
	printf("	FT_STRLEN\n");
	printf("LIBC %s ja sen pituus on %zu\n", "12345", strlen("12345"));
	printf(" OMA %s ja sen pituus on %zu\n\n", "12345", ft_strlen("12345"));
	//
	// FT_ISALPHA
	printf("	FT_ISALPHA\n");
	printf("LIBC %c | %c | %c\n", isalpha('p'), isalpha('5'), isalpha('A'));
	printf(" OMA %c | %c | %c\n\n", ft_isalpha('p'), ft_isalpha('5'), ft_isalpha('A'));
	//
	// FT_ISDIGIT
	printf("	FT_ISDIGIT\n");
	printf("LIBC %c | %c | %c | %c\n", isdigit('0'), isdigit('+'), isdigit('9'), isdigit('5'));
	printf(" OMA %c | %c | %c | %c\n\n", ft_isdigit('0'), ft_isdigit('+'), ft_isdigit('9'), ft_isdigit('5'));
	//
	// FT_ISALNUM
	printf("	FT_ISALNUM\n");
	printf("LIBC %c | %c | %c | %c\n", isalnum('p'), isalnum('-'), isalnum('('), isalnum('3'));
	printf(" OMA %c | %c | %c | %c\n\n", ft_isalnum('p'), ft_isalnum('-'), ft_isalnum('('), ft_isalnum('3'));
	//
	// FT_ISASCII
	printf("	FT_ISASCII\n");
	printf("LIBC %c | %c | %c\n", isascii(82), isascii(167), isascii(101));
	printf(" OMA %c | %c | %c\n\n", ft_isascii(82), ft_isascii(167), ft_isascii(101));
	//
	// FT_ISPRINT
	printf("	FT_ISPRINT\n");
	printf("LIBC %c | %c | %s%c%s | %c | %c\n", isprint(33), isprint(212), "SPACE", isprint(32), "TESTI", isprint(42), isprint(94));
	printf("LIBC %c | %c | %s%c%s | %c | %c\n", ft_isprint(33), ft_isprint(212), "SPACE", ft_isprint(32), "TESTI", ft_isprint(42), ft_isprint(94));
	return (0);
}
