/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 18:46:48 by dtelega           #+#    #+#             */
/*   Updated: 2016/12/26 18:56:24 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				temp;
	
	i = 0;
	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

#include <stdio.h>

int main()
{
	int	s1[8] = {100, 3, -100, 0, 2, 3, 1, -100003};
	sort_int_tab(s1, 8);
	printf("%i\n", s1[0]);
	printf("%i\n", s1[1]);
	printf("%i\n", s1[2]);
	printf("%i\n", s1[3]);
	printf("%i\n", s1[4]);
	printf("%i\n", s1[5]);
	printf("%i\n", s1[6]);
	printf("%i\n", s1[7]);
	//printf("%i\n", s1[8]);
}
