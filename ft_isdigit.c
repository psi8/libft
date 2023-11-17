/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:54:01 by psitkin           #+#    #+#             */
/*   Updated: 2023/10/29 18:37:46 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (('0' <= c) && ('9' >= c))
		return (1);
	return (0);
}
/*
#include<stdio.h>
int main()
{
	char letter = 'J';
	char num = '0';
	printf("%d\n", ft_isdigit(letter));
	printf("%d", ft_isdigit(num));
	return(0);
}*/
