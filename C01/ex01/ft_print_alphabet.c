/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:28:50 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/01/13 18:41:32 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	l;

	l = 'a';
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

/*int	main(void)

{
	ft_print_alphabet();
	return (0);
}*/
