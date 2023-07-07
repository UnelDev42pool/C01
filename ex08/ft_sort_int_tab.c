/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:37:35 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 09:52:46 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	swap(int *xp, int *yp)
{
	const int	temp = *xp;

	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_id;

	i = 0;
	while (i < size - 1)
	{
		min_id = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_id])
			{
				min_id = j;
			}
			swap(&tab[min_id], &tab[i]);
			j++;
		}
		i++;
	}
}
// int	main()
// {
// 	int tab[] = {3,2,1};
//     int *point = tab;
//     ft_sort_int_tab(point, 3);
//     printf("%d%d%d", tab[0], tab[1], tab[2]);
// }
