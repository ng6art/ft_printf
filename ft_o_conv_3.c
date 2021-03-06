/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o_conv_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <bgonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 14:25:56 by bgonzale          #+#    #+#             */
/*   Updated: 2019/04/08 01:05:27 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_o_right_precision(t_fwplc *ptrfwplc,
		char *str, int *sl_mw_ps_ih_mwm)
{
	sl_mw_ps_ih_mwm[4] -=
	(ft_atoi(str) == 0 && ptrfwplc->precision == 0) ? 1 : 0;
	if (ptrfwplc->minw > sl_mw_ps_ih_mwm[4])
	{
		while (sl_mw_ps_ih_mwm[1] < ptrfwplc->minw - sl_mw_ps_ih_mwm[4])
		{
			ft_putchar(' ');
			sl_mw_ps_ih_mwm[1]++;
		}
	}
	if (sl_mw_ps_ih_mwm[3])
		ft_putchar('0');
	if (ptrfwplc->precision > sl_mw_ps_ih_mwm[0])
	{
		while (sl_mw_ps_ih_mwm[2] < ptrfwplc->precision
			- sl_mw_ps_ih_mwm[0] - sl_mw_ps_ih_mwm[3])
		{
			ft_putchar('0');
			sl_mw_ps_ih_mwm[2]++;
		}
	}
	(ft_atoi(str) == 0 && ptrfwplc->precision == 0) ? 0 : ft_putstr(str);
	return (sl_mw_ps_ih_mwm[0] + sl_mw_ps_ih_mwm[1] + sl_mw_ps_ih_mwm[2]);
}

int		ft_o_right_minw(t_fwplc *ptrfwplc, t_flags *ptrflags,
		char *str, int *sl_mw_ps_ih_mwm)
{
	while (sl_mw_ps_ih_mwm[1] < ptrfwplc->minw
		- sl_mw_ps_ih_mwm[0] - sl_mw_ps_ih_mwm[3])
	{
		(ptrflags->zero) ? ft_putchar('0') : ft_putchar(' ');
		sl_mw_ps_ih_mwm[1]++;
	}
	if (sl_mw_ps_ih_mwm[3])
		ft_putchar('0');
	ft_putstr(str);
	return (sl_mw_ps_ih_mwm[0] + sl_mw_ps_ih_mwm[1]);
}

/*
** sl_mw_ps_ih_mwm[5]: Break Down
** sl_mw_ps_ih_mwm[0] = str_len: str/num length
** sl_mw_ps_ih_mwm[1] = mwidth: number of times mwidth was used
** sl_mw_ps_ih_mwm[2] = prec_space: number of times precision used
** sl_mw_ps_ih_mwm[3] = is_hash: is hash flag on or off
** sl_mw_ps_ih_mwm[4] = mw_max: max amoint mwidth can be used.
*/

int		ft_o_right(t_fwplc *ptrfwplc, t_flags *ptrflags, char *str)
{
	int		sl_mw_ps_ih_mwm[5];
	int		total;

	sl_mw_ps_ih_mwm[0] = ft_strlen(str);
	sl_mw_ps_ih_mwm[1] = 0;
	sl_mw_ps_ih_mwm[2] = 0;
	sl_mw_ps_ih_mwm[3] = ptrflags->hash;
	sl_mw_ps_ih_mwm[4] =
	(ptrfwplc->precision > (sl_mw_ps_ih_mwm[0] + sl_mw_ps_ih_mwm[3]))
	? ptrfwplc->precision : (sl_mw_ps_ih_mwm[0] + sl_mw_ps_ih_mwm[3]);
	total = 0 + sl_mw_ps_ih_mwm[3];
	if (ptrfwplc->minw > sl_mw_ps_ih_mwm[0] && ptrfwplc->precision == -1)
		total += ft_o_right_minw(ptrfwplc, ptrflags, str, sl_mw_ps_ih_mwm);
	else if (ptrfwplc->precision > -1)
		total += ft_o_right_precision(ptrfwplc, str, sl_mw_ps_ih_mwm);
	else
	{
		(sl_mw_ps_ih_mwm[3]) ? ft_putchar('0') : 0;
		ft_putstr(str);
		total += sl_mw_ps_ih_mwm[0];
	}
	return (total);
}
