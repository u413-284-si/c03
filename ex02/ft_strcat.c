/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:25:45 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 19:10:33 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* char *strcat(char *dest, const char *src);
Appends the src string to the dest string, over-writing the terminating null
byte ('\0') at the end of dest, and then adds a terminating null byte.
The strings may not overlap, and the dest string must have enough space for
the result.
The strcat() and strncat() functions return a pointer to the resulting
string dest. 
*/

int	length(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = length(dest);
	while (src[i])
	{	
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[100] = "hello, ";
// 	char	str2[] = "world";
// 	// unsigned int	n;

// 	// n = 4;
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	//printf("%s\n", strcat(str1, str2));
// 	printf("%s\n", ft_strcat(str1, str2));
// 	return (0);
// }
