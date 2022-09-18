/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kolmas_kasamain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:27:24 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/20 16:06:29 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	//	FT_MEMCPY
	printf("	FT_MEMCPY:\n");
	char	testmemcpy[15] = "MoROooTERRVEE!";
	char	copy[15] = "?";
	printf("Original:	%s, copy:	%s\n", testmemcpy, copy);
	printf("LIBC		%s, copy:	%s\n", testmemcpy, memcpy(copy, testmemcpy, 5));
	printf(" OMA		%s, copy:	%s\n\n", testmemcpy, ft_memcpy(copy, testmemcpy, 5));
	//
	//	FT_STRCPY
	printf("	FT_STRCPY:\n");
	char	teststrcpy[50] = "Woopwoop!";
	char	copystrcpy[50] = "WHATWHATWHAT";
	printf("Original:	%s, copy:	%s\n", teststrcpy, copystrcpy);
	printf("LIBC		%s, copy:	%s\n", teststrcpy, strcpy(copystrcpy, teststrcpy));
	printf(" OMA		%s, copy:	%s\n\n", teststrcpy, ft_strcpy(copystrcpy, teststrcpy));
	//
	//	FT_STRCAT
	printf("	FT_STRCAT:\n");
	char eka[50] = "KURA";
	char toka[50] = "PERSE!";
	printf("Eka:	%s, toka: %s\n", eka, toka);
	printf("Yhessa:	%s\n\n", ft_strcat(eka, toka));
	//
	//	FT_STRCMP
	printf("	FT_STRCMP:\n");
	char cmp1[50] = "ABC";
	char cmp2[50] = "AB";
	char cmp3[50] = "ABA";
	char cmp4[50] = "ABZ";
	printf("cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s\n", cmp1, cmp2, cmp3, cmp4);
	printf("LIBC cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n", strcmp(cmp1, cmp1), strcmp(cmp1, cmp2), strcmp(cmp3, cmp4));
	printf(" OMA cmp1 & cmp1 = %d		cmp1 & cmp2 = %d	cmp3 & cmp4 = %d\n\n", ft_strcmp(cmp1, cmp1), ft_strcmp(cmp1, cmp2), ft_strcmp(cmp3, cmp4));
	//
	//	FT_STRSTR
	printf("	FT_STRSTR:\n");
	char	strtest[50] = "Nonni minkalainen homma?";
	printf("TEST:		%s\n", strtest);
	printf("LIBC_FOUND:		%s\n", strstr(strtest, "kalai"));
	printf(" OMA_FOUND:		%s\n", ft_strstr(strtest, "kalai"));
	printf("LIBC_EMPTY:		%s\n", strstr(strtest, ""));
	printf(" OMA_EMPTY:		%s\n", ft_strstr(strtest, ""));
	printf("LIBC_NONO:		%s\n", strstr(strtest, "jdksa"));
	printf(" OMA_NONO:		%s\n", ft_strstr(strtest, "jdksa"));
	printf("LIBC_NONO2:		%s\n", strstr(strtest, "niminka"));
	printf(" OMA_NONO2:		%s\n\n", ft_strstr(strtest, "niminka"));
	//
	//	FT_MEMMOVE
	printf("	FT_MEMMOVE:\n");
	char	move1[] = "ONKS OLLU MITAAN?";
	char	move2[] = "aika hiljast";
	char	move3[] = "MURSU MARSU ???";
	printf("Eka: %s	toka: %s	kolmas: %s\n", move1, move2, move3);
	printf("LIBC1	%s\n", memmove(move1, move2, 5));
	printf(" OMA1	%s\n", ft_memmove(move1, move2, 5));
	printf("LIBC2	%s\n", memmove(move3, &move3[6], 5));
	printf(" OMA2	%s\n\n", ft_memmove(move3, &move3[6], 5));
	//
	//	FT_MEMCMP
	printf("	FT_MEMCMP:\n");
	char	cmp5[50] = "ABJ";
	char	cmp6[50] = "ABR";
	printf("cmp1 = %s	cmp2 = %s	cmp3 = %s	cmp4 = %s	cmp5 = %s	cmp6 = %s\n", cmp1, cmp2, cmp3, cmp4, cmp5, cmp6);
	printf("LIBC cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n", memcmp(cmp1, cmp1, 3), memcmp(cmp1, cmp6, 3), memcmp(cmp3, cmp4, 3), memcmp(cmp5, cmp1, 3));
	printf(" OMA cmp1 & cmp1 = %d	cmp1 & cmp6 = %d	cmp3 & cmp4 = %d	cmp5 & cmp1 = %d\n\n", ft_memcmp(cmp1, cmp1, 3), ft_memcmp(cmp1, cmp6, 3), ft_memcmp(cmp3, cmp4, 3), ft_memcmp(cmp5, cmp1, 3));
	return (0);
}
