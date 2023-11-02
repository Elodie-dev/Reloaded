/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:51:49 by ede-cola          #+#    #+#             */
/*   Updated: 2023/10/31 15:24:50 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdlib.h>

// void    ft_putnbr(int nb)
// {
//     char    c;
//     long    n;

//     n = nb;
//     if (nb < 0)
//     {
//         write(1, "-", 1);
//         n = -n;
//     }
//     if (n > 9)
//     {
//         ft_putnbr(n / 10);
//         c = '0' + (n % 10);
//         write(1, &c, 1);
//     }
//     else if (n <= 9)
//     {
//         c = '0' + n;
//         write(1, &c, 1);
//     }
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main(void)
// {
//     int *tab;
//     int i;
//     tab = malloc(1337 * sizeof(int));
//     i = 0;
//     while (i < 1337)
//     {
//         tab[i] = i+1;
//         i++;
//     }
//     ft_foreach(tab, 1337, &ft_putnbr);
// }