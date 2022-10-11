/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gengine_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:12:33 by jremy             #+#    #+#             */
/*   Updated: 2021/12/30 13:13:41 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_time(t_conf *conf)
{
	int	i;

	i = 0;
	while (i < SPEED)
		i++;
	conf->second++;
	if (conf->second == 6)
	{
		conf->timer++;
		conf->second = 0;
	}
	if (conf->timer == 6)
	{
		conf->rtimer++;
		conf->timer = 0;
	}
}
