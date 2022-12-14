/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 19:46:12 by fras          #+#    #+#                 */
/*   Updated: 2022/10/24 22:32:52 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	chr1;
	unsigned char	chr2;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	chr1 = (unsigned char)s1[i];
	chr2 = (unsigned char)s2[i];
	return (chr1 - chr2);
}
