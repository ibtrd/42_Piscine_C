/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:58:46 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 04:01:32 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			nb++;
		i++;
	}
	return (nb);
}