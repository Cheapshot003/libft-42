/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otietz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:32:17 by otietz            #+#    #+#             */
/*   Updated: 2022/10/03 15:36:29 by otietz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	char	*ss;

	ss = s;
	while (n != 0)
	{	
		*ss = c;
		ss++;
		n--;
	}
	return (s);
}
