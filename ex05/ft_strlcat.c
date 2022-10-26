/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:25:45 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/14 15:38:38 by sqiu             ###   ########.fr       */
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

The strlcat() function takes the full size of the buffer (not just the length)
and appends the NUL-terminated string src to the end of
dst (as long as size is larger than 0 or, in the case of strlcat(), as long as
there is at least one byte free in dst).  It will append at most size - 
strlen(dst) - 1 bytes, NUL-terminating the result.

Note that a byte for the NUL should be included in size.
Only operates on true "C" strings. For strlcat() both src and dst must be 
NUL-terminated.

if strlcat() traverses size characters without finding a NUL, the length of 
the string is considered to be size and the destination string will not be 
NUL-terminated (since there was no space for the NUL). The function returns 
min{dstsize,strlen(dst)}+strlen(src).

strlcat() returns the total length of the string it tried to create; 
meaning the initial length of dst plus the length of src.
*/

unsigned int	length(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = length(dest);
	src_length = length(src);
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[i] && dest_length + i + 1 < size)
	{	
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// int	main(void)
// {
//	unsigned int	n = 13; //size of dest string including \0 Byte
// 	unsigned int	r;
// 	char	str1[13] = "42dfgdl33r ";
// 	char	str2[] = "l33r";
// 
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	r = ft_strlcat(str1, str2, n);
// 	printf("%s\nTotal length: %d\n", str1, r);
//	/* If total length of string is bigger or equal buffer size, it means 
// 	that at least the last char was cut off as NULL takes the last place. */
// 	if (r > n)
// 		puts("String truncated");
//	else
// 	{
//     		puts("String was fully copied");
// 	}
// 	return (0);
// }
