/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:11:23 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/06 16:47:55 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	last_char;

	last_char = 0;
	while (str[last_char] != '\0')
	{
		last_char++;
	}
	return (last_char);
}
// int main(void)
// {
// 	printf("%d", ft_strlen("hello world"));
// }
