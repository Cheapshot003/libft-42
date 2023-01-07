/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otietz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:53:45 by otietz            #+#    #+#             */
/*   Updated: 2022/10/09 22:55:40 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	n;

	n = '\n';
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &n, 1);
}
