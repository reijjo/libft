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

int	main(void)
{
	//	FT_TOUPPER
	printf("	FT_TOUPPER:\n");
	printf("LIBC %c | %c | %c | %c | %c\n", toupper(97), toupper(109), toupper('o'), toupper(105), toupper(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_toupper(97), ft_toupper(109), ft_toupper('o'), ft_toupper(105), ft_toupper(219));
	//
	//	FT_TOLOWER
	printf("	FT_TOLOWER:\n");
	printf("LIBC %c | %c | %c | %c | %c\n", tolower(65), tolower(77), tolower('O'), tolower(73), tolower(219));
	printf(" OMA %c | %c | %c | %c | %c\n\n", ft_tolower(65), ft_tolower(77), ft_tolower('O'), ft_tolower(73), ft_tolower(219));
	//
	//	FT_MEMCHR
	printf("	FT_MEMCHR:\n");
	char	test1[] = "No mita helvettia?";
	printf("testi:	%s\n\n", test1);
	printf("LIBC	%s\n", memchr(test1, 't', sizeof(test1)));
	printf(" OMA	%s\n", ft_memchr(test1, 't', sizeof(test1)));
	printf("LIBC	%s\n", memchr(test1, 'z', sizeof(test1)));
	printf(" OMA	%s\n\n", ft_memchr(test1, 'z', sizeof(test1)));
	//
	//	FT_STRCHR
	printf("	FT_STRCHR:\n");
	char	test[] = "eka B toka B diibadaaba";
	printf("testi:	%s\n\n", test);
	printf("LIBC	%s\n", strchr(test, 'B'));
	printf("OMA	%s\n", ft_strchr(test, 'B'));
	printf("LIBC	%s\n", strchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strchr(test, 'z'));
	//
	//	FT_STRTCHR
	printf("	FT_STRRHR:\n");
	printf("testi:	%s\n\n", test);
	printf("LIBC	%s\n", strrchr(test, 'B'));
	printf("OMA	%s\n", ft_strrchr(test, 'B'));
	printf("LIBC	%s\n", strrchr(test, 'z'));
	printf("OMA	%s\n\n", ft_strrchr(test, 'z'));
	//
	//	FT_BZERO
	printf("	FT_BZERO:\n");
	char	testbzero[] = "pitkula";
	printf("ekaks:	%s, osote:	%p\n", testbzero, testbzero);
	ft_bzero(testbzero, 5);
	printf("lopuks:	%s, osote:	%p\n", testbzero, testbzero);
	return (0);
}
