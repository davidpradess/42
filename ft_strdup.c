/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:12:07 by dprades           #+#    #+#             */
/*   Updated: 2024/01/26 19:08:18 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	p = (char *) malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}

/*int	main(void)
{
	const char	str1[] = "hola";
	char *dup1 = ft_strdup(str1);
	char *dup2 = strdup(str1);	
	
	if (dup1)
	{
	printf("ft_strdup: %p, Content: %s\n", (void *)dup1, dup1);
	free(dup1);
	}
	if (dup2)
	{
	printf("strdup: %p, Content: %s\n", (void *)dup2, dup2);
	free(dup2);
	}
	return (0);
}*/
