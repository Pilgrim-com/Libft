/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:11:56 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:50:10 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		else if (*p1 == '\0' || *p2 == '\0')
			break ;
		p1++;
		p2++;
	}
	return (0);
}
