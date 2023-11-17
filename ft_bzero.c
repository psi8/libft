/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:14:00 by psitkin           #+#    #+#             */
/*   Updated: 2023/11/07 20:33:22 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// #include<stdio.h>
// int main() {

//     char buffer_own[10];

//     ft_bzero(buffer_own, sizeof(buffer_own));
//     //bzero(buffer, sizeof(buffer));

//     unsigned long i = 0;
//     while (i < sizeof(buffer_own)) 
// 	{
// 		printf("%d ", buffer_own[i]);
//         i++;
//     }

//     return 0;
// }