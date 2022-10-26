/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:25:45 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 19:52:53 by sqiu             ###   ########.fr       */
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
The strncat() function is similar, except that
*  it will use at most n bytes from src; and
*  src does not need to be null-terminated if it contains n or more bytes.

If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from
src plus the terminating null byte). Therefore, the size of dest must be at
least strlen(dest)+n+1.
*/

int	length(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_length;

	i = 0;
	dest_length = length(dest);
	while (src[i] && i < nb)
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
// 	unsigned int	n;

// 	n = 2;
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	//printf("%s\n", strncat(str1, str2, n));
// 	printf("%s\n", ft_strncat(str1, str2, n));
// 	return (0);
// }
