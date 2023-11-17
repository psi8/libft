/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:14:35 by psitkin           #+#    #+#             */
/*   Updated: 2023/10/29 19:03:07 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char letter = 'K';
	char num = '7';
	char non = '\n';
	printf("%d\n", ft_isalnum(letter));
	printf("%d\n", ft_isalnum(num));
	printf("%d\n", ft_isalnum(non));
	return (0);
}*/
