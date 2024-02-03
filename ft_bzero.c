/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:57:59 by dprades           #+#    #+#             */
/*   Updated: 2024/01/11 22:11:14 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
/*#include <stdio.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;

	b = (unsigned char *) s;
	while (n > 0)
	{
		*b = 0;
		b++;
		n--;
	}
}

/*int	main(void)
{
	char b[] = "Hello world";

	ft_bzero(b, 7 * sizeof(char));
	printf("%s", b);
	return (0);
}*/
