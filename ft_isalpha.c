/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:33:51 by psitkin           #+#    #+#             */
/*   Updated: 2023/10/29 19:21:13 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((('A' <= c) && ('Z' >= c)) || (('a' <= c) && ('z' >= c)))
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char letter = 'H';
	char num = '5'; 
	printf("%d\n", ft_isalpha(letter));
	printf("%d", ft_isalpha(num));
	return (0);
}*/
