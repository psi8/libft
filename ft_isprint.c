/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:08:55 by psitkin           #+#    #+#             */
/*   Updated: 2023/10/25 20:16:35 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((32 <= c) && (126 >= c))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char letter = 't';
	char num = '2';
	char nprint = '\n';
	printf("%d\n", ft_isprint(letter));
	printf("%d\n", ft_isprint(num));
	printf("%d\n", ft_isprint(nprint));
}*/
