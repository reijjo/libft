/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neljas_kasamain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:08:23 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/20 18:19:59 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	//	FT_STRLCAT
	printf("	FT_STRLCAT:\n");
	char	desti[20] = "Testi ";
	char	source[20] = "toimii?";

	printf("DST = %s	SRC = %s\n", desti, source);
	ft_strlcat(desti, source, 15);
	printf(" OMA %s\n\n", desti);
	//
	//	FT_STRDUP
	printf("	FT_STRDUP:\n");
	char	*dup1 = "Ahteri";
	char	*dup2 = "joo";
	printf("Sana1: %s	Sana2:	%s\n", dup1, dup2);
	dup2 = ft_strdup(dup1);
	printf("Sana2 dup jalkeen:	%s\n\n", dup2);	
	//
	//	FT_ATOI
	printf("	FT_ATOI:\n");
	printf("ATOI normi: %d\n", atoi("777"));
	printf(" MUN normi: %d\n", ft_atoi("777"));
	printf("ATOI miinus: %d\n", atoi("-777"));
	printf(" MUN miinus: %d\n", ft_atoi("-777"));
	printf("ATOI plusmerkki: %d\n", atoi("+777"));
	printf(" MUN plusmerkki: %d\n", ft_atoi("+777"));
	printf("ATOI valeja: %d\n", atoi("  777"));
	printf(" MUN valeja: %d\n", ft_atoi("  777"));
	printf("ATOI tab: %d\n", atoi("	777"));
	printf(" MUN tab: %d\n", ft_atoi("	777"));
	printf("ATOI vali Valissa: %d\n", atoi("77  7"));
	printf( "MUN vali Valissa: %d\n", ft_atoi("77  7"));
	printf("ATOI rivinvaihto alussa: %d\n", atoi("\n777"));
	printf(" MUN rivinvaihto alussa: %d\n", ft_atoi("\n777"));
	printf("ATOI min int: %d\n", atoi("-2147483648"));
	printf(" MUN min int: %d\n", ft_atoi("-2147483648"));
	printf("ATOI max int: %d\n", atoi("2147483647"));
	printf(" MUN max int: %d\n", ft_atoi("2147483647"));
	printf("ATOI yli min int: %d\n", atoi("-2147483649"));
	printf(" MUN yli min int: %d\n", ft_atoi("-2147483649"));
	printf("ATOI yli max int: %d\n", atoi("2147483648"));
	printf("MUN yli max int: %d\n", atoi("2147483648"));
	printf("ATOI DONT WORK WITH BLANKS1?: %d\n", atoi("\t\v\f\r\n \f-06050"));
	printf(" MUN DONT WORK WITH BLANKS1?: %d\n", ft_atoi("\t\v\f\r\n \f-06050"));
	printf("ATOI DONT WORK WITH BLANKS2?: %d\n", atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf(" MUN DONT WORK WITH BLANKS2? MUN: %d\n\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	//
	//	FT_MEMCCPY
	printf("	FT_MEMCCPY:\n");
	char	ccpyORI[50] = "huhhuh eipa!";
	char	ccpyCPY[50] = "....";
	printf("Original = %s	copy = %s\n", ccpyORI, ccpyCPY);
	printf("LIBC: huhhuh ei\n");
	ft_memccpy(ccpyCPY, ccpyORI, 'i', 10);
	printf("OMA : %s\n", ccpyCPY);
	ft_memccpy(ccpyCPY, ccpyORI, 'z', sizeof(ccpyORI));
	printf("LIBC: huhhuh eipa!\n");
	printf("OMA : %s\n\n", ccpyCPY);
	//
	//	FT_STRNSTR
	printf("	FT_STRNSTR:\n");
	char *teststrn = "Nonni minkalainen homma?";
	printf("TEST:	%s\n", teststrn);
	printf("LIBC_FOUND:	%s\n", strnstr(teststrn, "lainen hom", 21));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "lainen hom", 21));
	printf("LIBC_EMPTY:	%s\n", strnstr(teststrn, "", 15));
	printf(" OMA_EMPTY:	%s\n", ft_strnstr(teststrn, "", 15));
	printf("LIBC_FOUND:	%s\n", strnstr(teststrn, "ni", 5));
	printf(" OMA_FOUND:	%s\n", ft_strnstr(teststrn, "ni", 5));
	printf("LIBC_NONO:	%s\n", strnstr(teststrn, "ni", 4));
	printf(" OMA_NONO:	%s\n\n", ft_strnstr(teststrn, "ni", 4));
	//
	//	FT_STRNCMP
	printf("	FT_STRNCMP:\n");
	char	*lause1 = "PERKELE";
	char	*lause2 = "PERSAATANA";
	printf("eka: %s	toka: %s\n", lause1, lause2);
	printf("LIBC %d\n", strncmp(lause1, lause2, 2));
	printf(" OMA %d\n", ft_strncmp(lause1, lause2, 2));
	printf("LIBC %d\n", strncmp(lause1, lause2, 3));
	printf(" OMA %d\n", ft_strncmp(lause1, lause2, 3));
	printf("LIBC %d\n", strncmp(lause1, lause2, 5));
	printf(" OMA %d\n\n", ft_strncmp(lause1, lause2, 5));
	//
	//	FT_STRNCPY
	printf("	FT_STRNCPY:\n");
	char	ncpyORI[] = "Woopwoop!";
	char	ncpyCPY[] = "WHATWHATWHAAAT";
	printf("Original: %s	copy: %s\n", ncpyORI, ncpyCPY);
	ft_strncpy(ncpyCPY, ncpyORI, 5);
	printf("LIBC copy: (5) jalkeen: woopwHATWHAAAT\n");
	printf(" OMA copy: (5) jalkeen: %s\n\n", ncpyCPY);
	//
	//	FT_STRNCAT
	printf("	FT_STRNCAT:\n");
	char	eka[50] = "No huhhuh ";
	char	toka[50] = "saatana";
	printf("Eka = %s	toka = %s\n", eka, toka);
	ft_strncat(eka, toka, 4);
	printf("LIBC kimpassa: No huhhuh saat\n");
	printf(" OMA kimpassa: %s\n\n", eka);
	return (0);
}
