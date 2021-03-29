/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <tuperera@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/29 17:14:06 by tuperera      #+#    #+#                 */
/*   Updated: 2021/03/29 17:15:15 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long ft_atol(char *str) {
	long		result;
	int			sign;
	long long	maxval;

	maxval = 9223372036854775807;
	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		if (result > (maxval / 10))
			return (sign > 0) ? (-1) : (0);
		str++;
	}
	return (result * sign);
}