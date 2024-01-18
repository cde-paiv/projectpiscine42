/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:06:03 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/01/13 21:43:09 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	numero;

	numero = '0';
	while (numero <= '9')
	{
		write (1, &numero, 1);
		numero++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
