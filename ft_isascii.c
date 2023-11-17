/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:31:46 by psitkin           #+#    #+#             */
/*   Updated: 2023/10/25 20:07:06 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((0 <= c) && (127 >= c))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char letter = 'S';
	char num = '9';
	char some = 2;
	printf("%d\n", ft_isascii(letter));
	printf("%d\n", ft_isascii(num));
	printf("%d\n", ft_isascii(some));

}*/
