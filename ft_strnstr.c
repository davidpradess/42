/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:56:13 by dprades           #+#    #+#             */
/*   Updated: 2024/01/22 22:53:54 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && len > i)
	{
		n = 0;
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + i);
			n++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "llo";

	printf("%p\n", ft_strnstr(str1, str2, 15));
	printf("%s\n", ft_strnstr(str1, str2, 15));
	printf("%p\n", strnstr(str1, str2, 15));
	printf("%s\n", strnstr(str1, str2, 15));
}*/
