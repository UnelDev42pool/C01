/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:11:23 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/06 16:47:53 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	last_char;

	last_char = 0;
	while (str[last_char] != '\0')
	{
		write(1, &str[last_char], 1);
		last_char++;
	}
}
// int main(void)
// {
// 	ft_putstr("hello world");
// }
