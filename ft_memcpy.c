/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:27:11 by dprades           #+#    #+#             */
/*   Updated: 2024/01/24 21:30:08 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (dst != (void *)0 || src != (void *)0)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
	return (dst);
}
/*int	main(void)
{
	char	s[25] = "Hello World";
   	char	d[25];	
	
	ft_memcpy(d, s, sizeof(char) * 25);
	printf("%s\n", d);
	return (0);
}*/
