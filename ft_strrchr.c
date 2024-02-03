/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:27:38 by dprades           #+#    #+#             */
/*   Updated: 2024/01/24 23:37:19 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
	{
		return ((char *)(s + i));
	}
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *) s + i);
		}
		i--;
	}
	return (0);
}

/*int	main(void)
{
	char	arr[12] = "Hello World";
	char	x = 'o';

	printf("%p\n", ft_strrchr(arr, x));
	printf("%p\n", strrchr(arr, x));
	printf("%s\n", ft_strrchr(arr, x));
	printf("%s\n", strrchr(arr, x));
}*/
