/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:54:19 by dprades           #+#    #+#             */
/*   Updated: 2024/01/23 22:18:06 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s)[i] != (unsigned char)c)
			i++;
		else
			return ((unsigned char *) s + i);
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Hello World";
	char	x = 'W';
	size_t	f = 9;

	printf("%p\n", ft_memchr(str, x, f));
   	printf("%p\n", memchr(str, x, f));
	printf("%s\n", ft_memchr(str, x, f));
	printf("%s\n", memchr(str, x, f));
	return (0);	
}*/
