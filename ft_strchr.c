/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:03:07 by gajayme           #+#    #+#             */
/*   Updated: 2021/10/08 14:03:08 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strchr(const char *string, int symbol)
{
	while (*string != (char)symbol && *string)
	{
		string++;
	}
	if (*string == '\0' && symbol != '\0')
		return (NULL);
	return ((char *)string);
}
