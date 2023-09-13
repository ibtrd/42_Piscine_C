/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:09:10 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 01:20:13 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
