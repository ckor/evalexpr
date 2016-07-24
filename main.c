/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

typedef struct		s_opp
{
	char			*left;
	char			*right;
	char			*opp_token;
	
}					t_opp;

int					ft_expression_max_level(char *str)
{
	int				i;
	int				result;
	int				level;

	i = result = level = 0;
	while (str[i])
	{
		if (str[i] == '(')
			level++;
		if (str[i] == ')')
		{
			if (level > result)
				result = level;
			level--;
		}
		++i;
	}
	return (result);
}

int					ft_isspace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

char				*ft_remove_spaces(char *src)
{
	char			*dst;
	int				a;
	int				b;

	a = 0;
	b = 0;
	dst = malloc(sizeof(char) * (ft_strlen(src)));
	if (!dst)
		return (NULL);
	while (src[b] != '\0')
	{
		if (!ft_isspace(src[b]))
		{
			dst[a] = src[b];
			a++;
		}
		b++;
	}
	dst[a] = '\0';
	return (dst);
}

int					ft_eval_expr(char *expr)
{
	char			*expression;

	expression = NULL;
	expression = ft_remove_spaces(expr);
	ft_putchar('\n');
	ft_putstr(expression);
	ft_putchar('\n');
	ft_putnbr(ft_expression_max_level(expr));
	ft_putchar('\n');
	free(expression);
	return (0);
}

int					main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_eval_expr(av[1]);
	}
	return (0);
}
