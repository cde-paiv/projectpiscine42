/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:03:39 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/01/23 20:04:41 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc >= 0)
	{
		while (argv[i])
		{
			while (argv[i][j] != '\0')
			{
				write (1, &argv[i][j], 1);
				++j;
			}
			write(1, "\n", 1);
			++i;
			j = 0;
		}
	}
}
