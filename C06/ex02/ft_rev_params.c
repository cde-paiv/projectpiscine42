/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:21:06 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/01/23 20:46:01 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc -1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0' && argv[i])
		{
			write (1, &argv[i][j], 1);
			++j;
		}
		write(1, "\n", 1);
		--i;
	}
}