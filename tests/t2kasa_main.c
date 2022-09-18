/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toka_kasamain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:17:01 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/20 13:12:09 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

int	main(void)
{
	printf(MAGENTA"\n	2ND BUNCH\n");
	printf("	2ND BUNCH\n\n");
	//	FT_TOUPPER
	printf(YELLOW"	FT_TOUPPER:\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c | %c\n"RESET, toupper(97), toupper(109), toupper('o'), toupper(105), toupper(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_toupper(97), ft_toupper(109), ft_toupper('o'), ft_toupper(105), ft_toupper(219));
	//
	//	FT_TOLOWER
	printf(YELLOW"	FT_TOLOWER:\n"RESET);
	printf(CYAN"LIBC %c | %c | %c | %c | %c\n"RESET, tolower(65), tolower(77), tolower('O'), tolower(73), tolower(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_tolower(65), ft_tolower(77), ft_tolower('O'), ft_tolower(73), ft_tolower(219));
	//
	//	FT_MEMCHR
	printf(YELLOW"	FT_MEMCHR:\n"RESET);
	char	test1[] = "No mita helvettia?";
	printf(GREEN"testi:	%s\n\n"RESET, test1);
	printf(CYAN"LIBC	%s\n"RESET, memchr(test1, 't', sizeof(test1)));
	printf(" OMA	%s\n", ft_memchr(test1, 't', sizeof(test1)));
	printf(CYAN"LIBC	%s\n"RESET, memchr(test1, 'z', sizeof(test1)));
	printf(" OMA	%s\n\n", ft_memchr(test1, 'z', sizeof(test1)));
	//
	//	FT_STRCHR
	printf(YELLOW"	FT_STRCHR:\n"RESET);
	char	test[] = "eka B toka B diibadaaba";
	printf(GREEN"testi:	%s\n\n"RESET, test);
	printf(CYAN"LIBC	%s\n"RESET, strchr(test, 'B'));
	printf("OMA	%s\n", ft_strchr(test, 'B'));
	printf(CYAN"LIBC	%s\n"RESET, strchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strchr(test, 'z'));
	//
	//	FT_STRTCHR
	printf(YELLOW"	FT_STRRHR:\n"RESET);
	printf(GREEN"testi:	%s\n\n"RESET, test);
	printf(CYAN"LIBC	%s\n"RESET, strrchr(test, 'B'));
	printf("OMA	%s\n", ft_strrchr(test, 'B'));
	printf(CYAN"LIBC	%s\n"RESET, strrchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strrchr(test, 'z'));
	//
	//	FT_BZERO
	printf(YELLOW"	FT_BZERO:\n"RESET);
	char	testbzero[] = "pitkula";
	printf(CYAN"ekaks:	%s, osote:	%p\n"RESET, testbzero, testbzero);
	ft_bzero(testbzero, 5);
	printf("lopuks:	%s, osote:	%p\n", testbzero, testbzero);
	return (0);
}
