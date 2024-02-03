/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:48:54 by dprades           #+#    #+#             */
/*   Updated: 2024/01/29 21:02:19 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	str1len;
	char	*p;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	str1len = ft_strlen(s1);
	p = malloc(str1len + ft_strlen(s2) + 1 * (sizeof (char)));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[str1len + i] = s2[i];
		i++;
	}
	p[str1len + i] = '\0';
	return (p);
}
/*int main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = ", today is 29/01";
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}*/
