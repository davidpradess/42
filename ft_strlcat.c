/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:44:23 by dprades           #+#    #+#             */
/*   Updated: 2024/01/24 20:19:40 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	i = 0;
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && ((dstlen + i) < (dstsize -1)))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
/*int	main(void)
{
	char	src[] = "Hello World";
	char	dst1[25] = "Yooo!,";
	char	dst2[25] = "Yooo!,";

	printf("%zu\n", ft_strlcat(dst1, src, sizeof(dst1)));
	printf("%s\n", dst1);
	printf("%zu\n", strlcat(dst2, src, sizeof(dst2)));
	printf("%s\n", dst2);
	return (0);
}*/
