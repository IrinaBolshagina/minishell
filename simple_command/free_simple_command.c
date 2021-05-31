/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_simple_command.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klanie <klanie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:54:10 by klanie            #+#    #+#             */
/*   Updated: 2021/05/17 01:15:20 by klanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simple_command.h"

static void	free_args(char **args, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (args[i])
			free(args[i]);
		i++;
	}
	free(args);
}

void	free_simple_command(void *cmd)
{
	t_simple_command	*c;

	c = (t_simple_command *)cmd;
	if (!c)
		return ;
	if (c->args && c->args_num > 0)
		free_args(c->args, c->args_num);
	free(c);
}
