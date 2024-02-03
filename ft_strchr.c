/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:04:05 by dprades           #+#    #+#             */
/*   Updated: 2024/01/24 23:13:59 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
/*int	main(void)
{
	char	str[12] = "Hello World";
	int	x = 'o';

	printf("%p\n", ft_strchr(str, x));
	printf("%p\n", strchr(str, x));
	printf("%s\n", ft_strchr(str, x));
	printf("%s\n", strchr(str, x));
	return (0);
}*/
