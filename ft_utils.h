/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 12:20:19 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 12:20:21 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# include <unistd.h>
# include <stdlib.h>

typedef enum	e_bool
{
	false,
	true
}				t_bool;
void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);
#endif
