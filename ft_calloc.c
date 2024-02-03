/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:16:17 by dprades           #+#    #+#             */
/*   Updated: 2024/01/25 20:55:34 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}
/*int	main(void)
{
	printf("%s\n", ft_calloc(1, 4));
	printf("%p\n", calloc(1, 4));



printf("%p\n", calloc(1, 4));
printf("%p\n", calloc(1, 4));
printf("%p\n", calloc(1, 4));
printf("%p\n", calloc(1, 4));
printf("%s\n", calloc(1, 4));
printf("%s\n", calloc(1, 4));
	
	
}*/
