/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neljas_kasamain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:08:23 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/21 17:22:15 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

int	main(void)
{
	printf(MAGENTA"\n	4TH BUNCH\n");
	printf("	4TH BUNCH\n\n"RESET);
	//	FT_STRLCAT
	printf(YELLOW"	FT_STRLCAT:\n"RESET);
	char	desti[20] = "Testi ";
	char	source[20] = "toimii?";

	printf(GREEN"DST =	%s	SRC = %s\n"RESET, desti, source);
	ft_strlcat(desti, source, 15);
	printf("OMA =	%s\n\n", desti);
	//
	//	FT_STRDUP
	printf(YELLOW"	FT_STRDUP:\n"RESET);
	char	*dup1 = "Ahteri";
	char	*dup2 = "joo";
	printf(GREEN"Sana1: %s	Sana2:	%s\n"RESET, dup1, dup2);
	dup2 = ft_strdup(dup1);
	printf("Sana2 dup jalkeen:	%s\n\n", dup2);	
	//
	//	FT_ATOI
	printf(YELLOW"	FT_ATOI:\n"RESET);
	printf(CYAN"ATOI normi: %d\n"RESET, atoi("777"));
	printf(" MUN normi: %d\n", ft_atoi("777"));
	printf(CYAN"ATOI miinus: %d\n"RESET, atoi("-777"));
	printf(" MUN miinus: %d\n", ft_atoi("-777"));
	printf(CYAN"ATOI plusmerkki: %d\n"RESET, atoi("+777"));
	printf(" MUN plusmerkki: %d\n", ft_atoi("+777"));
	printf(CYAN"ATOI valeja: %d\n"RESET, atoi("  777"));
	printf(" MUN valeja: %d\n", ft_atoi("  777"));
	printf(CYAN"ATOI tab: %d\n"RESET, atoi("	777"));
	printf(" MUN tab: %d\n", ft_atoi("	777"));
	printf(CYAN"ATOI vali valissa: %d\n"RESET, atoi("77  7"));
	printf( "MUN vali valissa: %d\n", ft_atoi("77  7"));
	printf(CYAN"ATOI rivinvaihto alussa: %d\n"RESET, atoi("\n777"));
	printf(" MUN rivinvaihto alussa: %d\n", ft_atoi("\n777"));
	printf(CYAN"ATOI min int: %d\n"RESET, atoi("-2147483648"));
	printf(" MUN min int: %d\n", ft_atoi("-2147483648"));
	printf(CYAN"ATOI max int: %d\n"RESET, atoi("2147483647"));
	printf(" MUN max int: %d\n", ft_atoi("2147483647"));
	printf(CYAN"ATOI yli min int: %d\n"RESET, atoi("-2147483649"));
	printf(" MUN yli min int: %d\n", ft_atoi("-2147483649"));
	printf(CYAN"ATOI yli max int: %d\n"RESET, atoi("2147483648"));
	printf("MUN yli max int: %d\n", atoi("2147483648"));
	printf(CYAN"ATOI DONT WORK WITH BLANKS1?: %d\n"RESET, atoi("\t\v\f\r\n \f-06050"));
	printf(" MUN DONT WORK WITH BLANKS1?: %d\n", ft_atoi("\t\v\f\r\n \f-06050"));
	printf(CYAN"ATOI DONT WORK WITH BLANKS2?: %d\n"RESET, atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf(" MUN DONT WORK WITH BLANKS2? MUN: %d\n\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	//
	//	FT_MEMCCPY
	printf(YELLOW"	FT_MEMCCPY:\n"RESET);
	char	ccpyORI[50] = "huhhuh eipa!";
	char	ccpyCPY[50] = "....";
	printf(GREEN"Original = %s	copy = %s\n"RESET, ccpyORI, ccpyCPY);
	printf(CYAN"LIBC: huhhuh ei\n"RESET);
	ft_memccpy(ccpyCPY, ccpyORI, 'i', 10);
	printf("OMA : %s\n", ccpyCPY);
	ft_memccpy(ccpyCPY, ccpyORI, 'z', sizeof(ccpyORI));
	printf(CYAN"LIBC: huhhuh eipa!\n"RESET);
	printf("OMA : %s\n\n", ccpyCPY);
	//
	//	FT_STRNSTR
	printf(YELLOW"	FT_STRNSTR:\n"RESET);
	char *teststrn = "Nonni minkalainen homma?";
	printf(GREEN"TEST:	%s\n"RESET, teststrn);
	printf(CYAN"LIBC_FOUND:	%s\n"RESET, strnstr(teststrn, "lainen hom", 21));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "lainen hom", 21));
	printf(CYAN"LIBC_EMPTY:	%s\n"RESET, strnstr(teststrn, "", 15));
	printf(" OMA_EMPTY:	%s\n", ft_strnstr(teststrn, "", 15));
	printf(CYAN"LIBC_FOUND:	%s\n"RESET, strnstr(teststrn, "ni", 5));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "ni", 5));
	printf(CYAN"LIBC_NONO:	%s\n"RESET, strnstr(teststrn, "ni", 4));
	printf(" OMA_NONO:	%s\n\n", ft_strnstr(teststrn, "ni", 4));
	//
	//	FT_STRNCMP
	printf(YELLOW"	FT_STRNCMP:\n"RESET);
	char	*lause1 = "PERKELE";
	char	*lause2 = "PERSAATANA";
	printf(GREEN"eka: %s	toka: %s\n"RESET, lause1, lause2);
	printf(CYAN"LIBC 2 merkkia	%d\n"RESET, strncmp(lause1, lause2, 2));
	printf(" OMA 2 merkkia	%d\n", ft_strncmp(lause1, lause2, 2));
	printf(CYAN"LIBC 3 merkkia	%d\n"RESET, strncmp(lause1, lause2, 3));
	printf(" OMA 3 merkkia	%d\n", ft_strncmp(lause1, lause2, 3));
	printf(CYAN"LIBC 5 merkkia	%d\n"RESET, strncmp(lause1, lause2, 5));
	printf(" OMA 5 merkkia	%d\n\n", ft_strncmp(lause1, lause2, 5));
	//
	//	FT_STRNCPY
	printf(YELLOW"	FT_STRNCPY:\n"RESET);
	char	ncpyORI[] = "Woopwoop!";
	char	ncpyCPY[] = "WHATWHATWHAAAT";
	printf(GREEN"Original: %s	copy: %s\n"RESET, ncpyORI, ncpyCPY);
	ft_strncpy(ncpyCPY, ncpyORI, 5);
	printf(CYAN"LIBC copy (5) jalkeen: woopwHATWHAAAT\n"RESET);
	printf(" OMA copy (5) jalkeen: %s\n\n", ncpyCPY);
	//
	//	FT_STRNCAT
	printf(YELLOW"	FT_STRNCAT:\n"RESET);
	char	eka[50] = "No huhhuh ";
	char	toka[50] = "saatana";
	printf(GREEN"Eka = %s	toka = %s\n"RESET, eka, toka);
	ft_strncat(eka, toka, 4);
	printf(CYAN"LIBC kimpassa: No huhhuh saat\n"RESET);
	printf(" OMA kimpassa: %s\n\n", eka);
	return (0);
}
