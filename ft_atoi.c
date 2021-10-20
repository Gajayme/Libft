/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:59:40 by gajayme           #+#    #+#             */
/*   Updated: 2021/10/08 13:59:42 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char i, int per)
{
	int	a;
	int	b;

	if (!per)
		return (47 < i && i < 58);
	else
	{
		a = (i == ' ' || i == '\n' || i == '\t');
		b = (i == '\v' || i == '\f' || i == '\r');
		return (a || b);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	i = -1;
	j = 1;
	while (checker(str[++i], 1))
	{
	}
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			j *= (-1);
	i -= 1;
	if (checker(str[i], 0))
		res = (str[i] - '0') * j;
	while (checker(str[++i], 0))
		res = res * 10 + (str[i] - '0') * j;
	return (res);
}
