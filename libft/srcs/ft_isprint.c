/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:30:07 by jsalome           #+#    #+#             */
/*   Updated: 2020/03/06 19:38:43 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
