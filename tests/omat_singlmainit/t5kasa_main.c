/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viides_kasa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:21:15 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/21 13:23:12 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	//	FT_MEMALLOC
	printf("	FT_MEMALLOC:\n");
	char	*memall	= "MITAAA";
	printf("Before:	%s %p\n", memall, memall);
	ft_memalloc(5);
	printf("After?:	%s %p\n\n", memall, memall);
	//
	//	FT_PUTCHAR
	printf("	FT_PUTCHAR:\n");
	printf("WRITE: \n");
   	write(1, "G", 1);
	printf("\nPUTCHAR:\n");
   	ft_putchar('G');	
	//
	//	FT_PUTSTR
	printf("\n\n	FT_PUTSTR:\n");
	printf("PRINTF:		Toimiiko?\n");
	ft_putstr("FT_PUTSTR:	Toimiiko?\n");
	//
	//	FT_PUTENDL
	printf("\n	FT_PUTENDL:\n");
	ft_putendl("FT_PUTENDL:	What");
	ft_putendl("FT_PUTENDL:	Whatwhat");
	ft_putstr("FT_PUTSTR:	What");
	ft_putstr("FT_PUTSTR:	Whatwhat");
	//
	//	FT_PUTNBR
	printf("\n\n	FT_PUTNBR:\n");
	ft_putstr("Alle 0		(-4)		");
	ft_putnbr(-4);
	ft_putstr("\nAlle 10		(4)		");
	ft_putnbr(4);
	ft_putstr("\nYli 10		(44)		");
	ft_putnbr(44);
	ft_putstr("\nMIN 		(-2147483648)	");
	ft_putnbr(-2147483648);
	ft_putstr("\nMAX 		(2147483647)	");
	ft_putnbr(2147483647);
	//
	//	FT_STRNEW
	printf("\n\n	FT_STRNEW:\n");
	char	*new = "AIVAN PIHAL";
	printf("Aluks:	%s	%p\n", new, new);
	ft_strnew(sizeof(new));
	printf("Lopuks:	%s	%p\n", new, new); 
	//
	//	FT_STRDEL
	printf("\n	FT_STRDEL:\n");
	char	*muisti;
	muisti = (char *)malloc(sizeof(char));
	printf("Ekaks:	%p\n", muisti);
	ft_strdel(&muisti);
	printf("Lopuks:	%p\n\n", muisti);
	//
	//	FT_STRCLR
	printf("	FT_STRCLR:\n");
	char clear[] = "Toimi sina edes";
	printf("Ekaks:	%s %p\n", clear, clear);
	ft_strclr(clear);
	printf("Lopuks:	%s %p\n\n", clear, clear);
	//
	//	FT_STREQU
	printf("	FT_STREQU:\n");
	char	equ1[] = "HELVETTI";
	char	equ2[] = "HELVuuu";
	printf("Sana1:	%s\n", equ1);
	printf("Sana2:	%s\n", equ2);
	printf("Sama:	%d\n", ft_strequ(equ1, equ1));
	printf("Eri:	%d\n\n", ft_strequ(equ1, equ2));
	//
	//	FT_STRNEQU
	printf("	FT_STRNEQU:\n");
	printf("Sana1:	%s\n", equ1);
	printf("Sana2:	%s\n", equ2);
	printf("Sama 2 kirjainta?	%d\n", ft_strnequ(equ1, equ2, 2));
	printf("Sama 4 kirjainta?	%d\n", ft_strnequ(equ1, equ2, 4));
	printf("Sama 5 kirjainta?	%d\n\n", ft_strnequ(equ1, equ2, 5));
	//
	//	FT_STRSUB
	printf("	FT_STRSUB:\n");
	char	sub[] = "123456789";
	printf("Koko = %s\n", sub);
	printf("Mini = %s\n\n", ft_strsub(sub, 3, 5));
	//
	//	FT_STRJOIN
	printf("	FT_STRJOIN:\n");
	char	join1[] = "Vanha ";
	char	join2[] = "kunnon.";
	printf("Eka: %s	toka: %s\n", join1, join2);
	printf("Yhes: %s\n\n", ft_strjoin(join1, join2));
	//
	//	FT_PUT_FD
	printf("	FT_PUT_FD\n");
	printf("cat FILEDESCRIPTOR\n");
	printf("should be:	b\n");
	printf("should be:	What");
	printf("Whatwhat");
	printf("WHAT\n");
	printf("should be:	WHATWHAT\n");
	printf("should be:	-4\n");
	printf("should be:	4\n");
	printf("should be:	44\n");
	printf("should be:	-2147483648\n");
	int fd = open("FILEDESCRIPTOR", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("OPEN ERROR!");
		return (1);
	}
	ft_putchar_fd('b', fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("What", fd);
	ft_putstr_fd("Whatwhat", fd);
	ft_putendl_fd("WHAT", fd);
	ft_putendl_fd("WHATWHAT", fd);
	ft_putnbr_fd(-4, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(4, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(44, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	if (close(fd) == -1)
	{
		ft_putstr("CLOSE ERROR!");
		return (1);
	}
	close (fd);
	return (0);
}
