/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kolmas_kasamain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:27:24 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/21 16:59:17 by taitomer         ###   ########.fr       */
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
	printf(MAGENTA"\n	3RD BUNCH\n");
	printf("	3RD BUNCH\n\n"RESET);
	//	FT_MEMCPY
	printf(YELLOW"	FT_MEMCPY:\n"RESET);
	char	testmemcpy[15] = "MoROooTERRVEE!";
	char	copy[15] = "?";
	printf(GREEN"Original:	%s, copy:	%s\n"RESET, testmemcpy, copy);
	printf(CYAN"LIBC		%s, copy:	%s\n"RESET, testmemcpy, memcpy(copy, testmemcpy, 5));
	printf(" OMA		%s, copy:	%s\n\n", testmemcpy, ft_memcpy(copy, testmemcpy, 5));
	//
	//	FT_STRCPY
	printf(YELLOW"	FT_STRCPY:\n"RESET);
	char	teststrcpy[50] = "Woopwoop!";
	char	copystrcpy[50] = "WHATWHATWHAT";
	printf(GREEN"Original:	%s, copy:	%s\n"RESET, teststrcpy, copystrcpy);
	printf(CYAN"LIBC		%s, copy:	%s\n"RESET, teststrcpy, strcpy(copystrcpy, teststrcpy));
	printf(" OMA		%s, copy:	%s\n\n", teststrcpy, ft_strcpy(copystrcpy, teststrcpy));
	//
	//	FT_STRCAT
	printf(YELLOW"	FT_STRCAT:\n"RESET);
	char eka[50] = "KURA";
	char toka[50] = "PERSE!";
	printf(CYAN"Eka:	%s, toka: %s\n"RESET, eka, toka);
	printf("Yhessa:	%s\n\n", ft_strcat(eka, toka));
	//
	//	FT_STRCMP
	printf(YELLOW"	FT_STRCMP:\n"RESET);
	char cmp1[50] = "ABC";
	char cmp2[50] = "AB";
	char cmp3[50] = "ABA";
	char cmp4[50] = "ABZ";
	printf(GREEN"cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s\n"RESET, cmp1, cmp2, cmp3, cmp4);
	printf(CYAN"LIBC cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n"RESET, strcmp(cmp1, cmp1), strcmp(cmp1, cmp2), strcmp(cmp3, cmp4));
	printf(" OMA cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n\n", ft_strcmp(cmp1, cmp1), ft_strcmp(cmp1, cmp2), ft_strcmp(cmp3, cmp4));
	//
	//	FT_STRSTR
	printf(YELLOW"	FT_STRSTR:\n"RESET);
	char	strtest[50] = "Nonni minkalainen homma?";
	printf(GREEN"TEST:		%s\n"RESET, strtest);
	printf(CYAN"LIBC_FOUND:		%s\n"RESET, strstr(strtest, "kalai"));
	printf(" OMA_FOUND:		%s\n", ft_strstr(strtest, "kalai"));
	printf(CYAN"LIBC_EMPTY:		%s\n"RESET, strstr(strtest, ""));
	printf(" OMA_EMPTY:		%s\n", ft_strstr(strtest, ""));
	printf(CYAN"LIBC_NONO:		%s\n"RESET, strstr(strtest, "jdksa"));
	printf(" OMA_NONO:		%s\n", ft_strstr(strtest, "jdksa"));
	printf(CYAN"LIBC_NONO2:		%s\n"RESET, strstr(strtest, "niminka"));
	printf(" OMA_NONO2:		%s\n\n", ft_strstr(strtest, "niminka"));
	//
	//	FT_MEMMOVE
	printf(YELLOW"	FT_MEMMOVE:\n"RESET);
	char	move1[] = "ONKS OLLU MITAAN?";
	char	move2[] = "aika hiljast";
	char	move3[] = "MURSU MARSU ???";
	printf(GREEN"Eka: %s	toka: %s	kolmas: %s\n"RESET, move1, move2, move3);
	printf(CYAN"LIBC1	%s\n"RESET, memmove(move1, move2, 5));
	printf(" OMA1	%s\n", ft_memmove(move1, move2, 5));
	printf(CYAN"LIBC2	%s\n"RESET, memmove(move3, &move3[6], 5));
	printf(" OMA2	%s\n\n", ft_memmove(move3, &move3[6], 5));
	//
	//	FT_MEMCMP
	printf(YELLOW"	FT_MEMCMP:\n"RESET);
	char	cmp5[50] = "ABJ";
	char	cmp6[50] = "ABR";
	printf(GREEN"cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s	cmp5 = %s	cmp6 = %s\n"RESET, cmp1, cmp2, cmp3, cmp4, cmp5, cmp6);
	printf(CYAN"LIBC cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n"RESET, memcmp(cmp1, cmp1, 3), memcmp(cmp1, cmp6, 3), memcmp(cmp3, cmp4, 3), memcmp(cmp5, cmp1, 3));
	printf(" OMA cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n\n", ft_memcmp(cmp1, cmp1, 3), ft_memcmp(cmp1, cmp6, 3), ft_memcmp(cmp3, cmp4, 3), ft_memcmp(cmp5, cmp1, 3));
	return (0);
}
