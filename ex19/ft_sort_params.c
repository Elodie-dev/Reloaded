/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:43 by ede-cola          #+#    #+#             */
/*   Updated: 2023/10/31 10:57:56 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char	*str)
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_tab(char **str, int size)
{
	int	i;

	while (size > 1)
	{
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
				ft_swap(&str[i], &str[i + 1]);
			i++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_sort_tab(argv, argc);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}		
}
