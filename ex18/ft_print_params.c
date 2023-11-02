/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:05:18 by ede-cola          #+#    #+#             */
/*   Updated: 2023/10/31 10:57:51 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}
