/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:46 by dprades           #+#    #+#             */
/*   Updated: 2024/01/30 20:36:09 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	p = malloc(len + 1 * (sizeof(char)));
	if (!p)
		return (NULL);
	ft_memcpy(p, &s1[i], len);
	p[len] = '\0';
	return (p);
}
/*int main(void)
{
	char	*str = strdup("abababaholamiriamababa");
	char	*set = ("ab");

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/
