/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:31:15 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 16:37:56 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char *osrc;

	osrc = s;
	while (n--)
		osrc[n] = '0';
}