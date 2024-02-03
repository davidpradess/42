/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:24:42 by dprades           #+#    #+#             */
/*   Updated: 2024/01/11 22:24:45 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) b;
	while (len > 0)
	{
		s[i] = (unsigned char) c;
		i++;
		len--;
	}
	return (b);
}

/*int	main(void)
{
	char b[] = "Hello world";

	ft_memset(b, 'X', 5 * sizeof(char));
	printf("%s", b);
}*/
