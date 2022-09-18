/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdmain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:03:00 by taitomer          #+#    #+#             */
/*   Updated: 2021/11/16 14:30:31 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("FILEDESCRIPTOR", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
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
	close(fd);
	return (0);
}
