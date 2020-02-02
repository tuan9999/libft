/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <tuperera@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:38:30 by tuperera       #+#    #+#                */
/*   Updated: 2019/10/31 18:14:31 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
