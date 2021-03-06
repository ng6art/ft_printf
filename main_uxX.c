/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_uxX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <bgonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 01:12:01 by bgonzale          #+#    #+#             */
/*   Updated: 2019/04/03 01:34:35 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	/*
	** printf && ft_printf
	*/

	// [u] - Conversion
	printf("\n\n[u] - Conversion\n");
	// printf("[%d]\n", printf("(-#u),                        -1 = [%-#u]\n", -1));
	// printf("[%d]\n", printf("(- u),                        -1 = [%- u]\n", -1));
	// printf("[%d]\n", printf("(-+u),                        -1 = [%-+u]\n", -1));
	// printf("[%d]\n", printf("(-0u),                        -1 = [%-0u]\n", -1));
	printf("[%d]\n", printf("(-u),                        -1 = [%-u]\n", -1));
	printf("[%d]\n", ft_printf("(-u),                        -1 = [%-u]\n", -1));
	printf("[%d]\n", printf("(-u),                         0 = [%-u]\n", 0));
	printf("[%d]\n", ft_printf("(-u),                         0 = [%-u]\n", 0));
	printf("[%d]\n", printf("(-u),                4294967296 = [%-u]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(-u),                4294967296 = [%-u]\n", 4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(-u),                         42 = [%-u]\n", 42));
	printf("[%d]\n", ft_printf("(-u),                         42 = [%-u]\n", 42));
	printf("[%d]\n", printf("(-u),                        -42 = [%-u]\n", -42));
	printf("[%d]\n", ft_printf("(-u),                        -42 = [%-u]\n", -42));
	printf("[%d]\n", printf("(-15u),                       42 = [%-15u]\n", 42));
	printf("[%d]\n", ft_printf("(-15u),                       42 = [%-15u]\n", 42));
	printf("[%d]\n", printf("(-15u),                      -42 = [%-15u]\n", -42));
	printf("[%d]\n", ft_printf("(-15u),                      -42 = [%-15u]\n", -42));
	printf("[%d]\n", printf("(-20.13u),                    42 = [%-20.13u]\n", 42));
	printf("[%d]\n", ft_printf("(-20.13u),                    42 = [%-20.13u]\n", 42));
	printf("[%d]\n", printf("(-20.13u),                   -42 = [%-20.13u]\n", -42));
	printf("[%d]\n", ft_printf("(-20.13u),                   -42 = [%-20.13u]\n", -42));
	printf("[%d]\n", printf("(-13.20u),                    42 = [%-13.20u]\n", 42));
	printf("[%d]\n", ft_printf("(-13.20u),                    42 = [%-13.20u]\n", 42));
	printf("[%d]\n", printf("(-13.20u),                   -42 = [%-13.20u]\n", -42));
	printf("[%d]\n", ft_printf("(-13.20u),                   -42 = [%-13.20u]\n", -42));
	printf("[%d]\n", printf("(-.20u),                      42 = [%-.20u]\n", 42));
	printf("[%d]\n", ft_printf("(-.20u),                      42 = [%-.20u]\n", 42));
	printf("[%d]\n", printf("(-.20u),                     -42 = [%-.20u]\n", -42));
	printf("[%d]\n", ft_printf("(-.20u),                     -42 = [%-.20u]\n", -42));
	printf("[%d]\n", printf("(-.u),                        42 = [%-.u]\n", 42));
	printf("[%d]\n", ft_printf("(-.u),                        42 = [%-.u]\n", 42));
	printf("[%d]\n", printf("(-.u),                       -42 = [%-.u]\n", -42));
	printf("[%d]\n", ft_printf("(-.u),                       -42 = [%-.u]\n", -42));
	printf("[%d]\n", printf("(-.0u),                       42 = [%-.0u]\n", 42));
	printf("[%d]\n", ft_printf("(-.0u),                       42 = [%-.0u]\n", 42));
	printf("[%d]\n", printf("(-.0u),                      -42 = [%-.0u]\n", -42));
	printf("[%d]\n", ft_printf("(-.0u),                      -42 = [%-.0u]\n", -42));
	printf("[%d]\n", printf("(-15.0u),                     42 = [%-15.0u]\n", 42));
	printf("[%d]\n", ft_printf("(-15.0u),                     42 = [%-15.0u]\n", 42));
	printf("[%d]\n", printf("(-15.0u),                    -42 = [%-15.0u]\n", -42));
	printf("[%d]\n", ft_printf("(-15.0u),                    -42 = [%-15.0u]\n", -42));
	printf("[%d]\n", printf("(-15.2u),                     42 = [%-15.2u]\n", 42));
	printf("[%d]\n", ft_printf("(-15.2u),                     42 = [%-15.2u]\n", 42));
	printf("[%d]\n", printf("(-15.2u),                    -42 = [%-15.2u]\n", -42));
	printf("[%d]\n", ft_printf("(-15.2u),                    -42 = [%-15.2u]\n", -42));
	printf("\n");
	printf("\n");
	// printf("[%d]\n", printf("(#u),                        -1 = [%#u]\n", -1));
	// printf("[%d]\n", printf("( u),                        -1 = [% u]\n", -1));
	// printf("[%d]\n", printf("(+u),                        -1 = [%+u]\n", -1));
	printf("[%d]\n", printf("(u),                        -1 = [%u]\n", -1));
	printf("[%d]\n", ft_printf("(u),                        -1 = [%u]\n", -1));
	printf("[%d]\n", printf("(u),                         0 = [%u]\n", 0));
	printf("[%d]\n", ft_printf("(u),                         0 = [%u]\n", 0));
	printf("[%d]\n", printf("(u),                4294967296 = [%u]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(u),                4294967296 = [%u]\n", 4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(u),                         42 = [%u]\n", 42));
	printf("[%d]\n", ft_printf("(u),                         42 = [%u]\n", 42));
	printf("[%d]\n", printf("(0u),                        42 = [%0u]\n", 42));
	printf("[%d]\n", ft_printf("(0u),                        42 = [%0u]\n", 42));
	printf("[%d]\n", printf("(u),                        -42 = [%u]\n", -42));
	printf("[%d]\n", ft_printf("(u),                        -42 = [%u]\n", -42));
	printf("[%d]\n", printf("(15u),                       42 = [%15u]\n", 42));
	printf("[%d]\n", ft_printf("(15u),                       42 = [%15u]\n", 42));
	printf("[%d]\n", printf("(15u),                      -42 = [%15u]\n", -42));
	printf("[%d]\n", ft_printf("(15u),                      -42 = [%15u]\n", -42));
	printf("[%d]\n", printf("(015u),                      42 = [%015u]\n", 42));
	printf("[%d]\n", ft_printf("(015u),                      42 = [%015u]\n", 42));
	printf("[%d]\n", printf("(015u),                     -42 = [%015u]\n", -42));
	printf("[%d]\n", ft_printf("(015u),                     -42 = [%015u]\n", -42));
	printf("[%d]\n", printf("(20.13u),                    42 = [%20.13u]\n", 42));
	printf("[%d]\n", ft_printf("(20.13u),                    42 = [%20.13u]\n", 42));
	printf("[%d]\n", printf("(20.13u),                   -42 = [%20.13u]\n", -42));
	printf("[%d]\n", ft_printf("(20.13u),                   -42 = [%20.13u]\n", -42));
	printf("[%d]\n", printf("(020.13u),                   42 = [%020.13u]\n", 42));
	printf("[%d]\n", ft_printf("(020.13u),                   42 = [%020.13u]\n", 42));
	printf("[%d]\n", printf("(020.13u),                  -42 = [%020.13u]\n", -42));
	printf("[%d]\n", ft_printf("(020.13u),                  -42 = [%020.13u]\n", -42));
	printf("[%d]\n", printf("(13.20u),                    42 = [%13.20u]\n", 42));
	printf("[%d]\n", ft_printf("(13.20u),                    42 = [%13.20u]\n", 42));
	printf("[%d]\n", printf("(13.20u),                   -42 = [%13.20u]\n", -42));
	printf("[%d]\n", ft_printf("(13.20u),                   -42 = [%13.20u]\n", -42));
	printf("[%d]\n", printf("(.20u),                      42 = [%.20u]\n", 42));
	printf("[%d]\n", ft_printf("(.20u),                      42 = [%.20u]\n", 42));
	printf("[%d]\n", printf("(.20u),                     -42 = [%.20u]\n", -42));
	printf("[%d]\n", ft_printf("(.20u),                     -42 = [%.20u]\n", -42));
	printf("[%d]\n", printf("(.u),                        42 = [%.u]\n", 42));
	printf("[%d]\n", ft_printf("(.u),                        42 = [%.u]\n", 42));
	printf("[%d]\n", printf("(.u),                       -42 = [%.u]\n", -42));
	printf("[%d]\n", ft_printf("(.u),                       -42 = [%.u]\n", -42));
	printf("[%d]\n", printf("(.0u),                       42 = [%.0u]\n", 42));
	printf("[%d]\n", ft_printf("(.0u),                       42 = [%.0u]\n", 42));
	printf("[%d]\n", printf("(.0u),                      -42 = [%.0u]\n", -42));
	printf("[%d]\n", ft_printf("(.0u),                      -42 = [%.0u]\n", -42));
	printf("[%d]\n", printf("(15.0u),                     42 = [%15.0u]\n", 42));
	printf("[%d]\n", ft_printf("(15.0u),                     42 = [%15.0u]\n", 42));
	printf("[%d]\n", printf("(15.0u),                    -42 = [%15.0u]\n", -42));
	printf("[%d]\n", ft_printf("(15.0u),                    -42 = [%15.0u]\n", -42));
	printf("[%d]\n", printf("(15.2u),                     42 = [%15.2u]\n", 42));
	printf("[%d]\n", ft_printf("(15.2u),                     42 = [%15.2u]\n", 42));
	printf("[%d]\n", printf("(15.2u),                    -42 = [%15.2u]\n", -42));
	printf("[%d]\n", ft_printf("(15.2u),                    -42 = [%15.2u]\n", -42));

	// [x] - Conversion
	printf("\n\n[x] - Conversion\n");
	// printf("[%d]\n", printf("(-+x),                     42 = [%-+x]\n", 42));
	// printf("[%d]\n", printf("(- x),                     42 = [%- x]\n", 42));
	printf("[%d]\n", printf("(-x),                     -1 = [%-x]\n", -1));
	printf("[%d]\n", ft_printf("(-x),                     -1 = [%-x]\n", -1));
	printf("[%d]\n", printf("(-x),                      0 = [%-x]\n", 0));
	printf("[%d]\n", ft_printf("(-x),                      0 = [%-x]\n", 0));
	printf("[%d]\n", printf("(-x),             4294967296 = [%-x]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(-x),             4294967296 = [%-x]\n", (unsigned int)4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(-#x),                                  0 = [%-#x]\n", 0));
	printf("[%d]\n", ft_printf("(-#x),                                  0 = [%-#x]\n", 0));
	printf("[%d]\n", printf("(-x),                                  42 = [%-x]\n", 42));
	printf("[%d]\n", ft_printf("(-x),                                  42 = [%-x]\n", 42));
	printf("[%d]\n", printf("(-x),                                 -42 = [%-x]\n", -42));
	printf("[%d]\n", ft_printf("(-x),                                 -42 = [%-x]\n", -42));
	printf("[%d]\n", printf("(-#x),                                 42 = [%-#x]\n", 42));
	printf("[%d]\n", ft_printf("(-#x),                                 42 = [%-#x]\n", 42));
	printf("[%d]\n", printf("(-#x),                                -42 = [%-#x]\n", -42));
	printf("[%d]\n", ft_printf("(-#x),                                -42 = [%-#x]\n", -42));
	printf("[%d]\n", printf("(-#1x),                                 0 = [%-#1x]\n", 0));
	printf("[%d]\n", ft_printf("(-#1x),                                 0 = [%-#1x]\n", 0));
	printf("[%d]\n", printf("(-1x),                                 42 = [%-1x]\n", 42));
	printf("[%d]\n", ft_printf("(-1x),                                 42 = [%-1x]\n", 42));
	printf("[%d]\n", printf("(-1x),                                -42 = [%-1x]\n", -42));
	printf("[%d]\n", ft_printf("(-1x),                                -42 = [%-1x]\n", -42));
	printf("[%d]\n", printf("(-#1x),                                42 = [%-#1x]\n", 42));
	printf("[%d]\n", ft_printf("(-#1x),                                42 = [%-#1x]\n", 42));
	printf("[%d]\n", printf("(-#1x),                               -42 = [%-#1x]\n", -42));
	printf("[%d]\n", ft_printf("(-#1x),                               -42 = [%-#1x]\n", -42));
	printf("[%d]\n", printf("(-#20x),                                0 = [%-#20x]\n", 0));
	printf("[%d]\n", ft_printf("(-#20x),                                0 = [%-#20x]\n", 0));
	printf("[%d]\n", printf("(-20x),                                42 = [%-20x]\n", 42));
	printf("[%d]\n", ft_printf("(-20x),                                42 = [%-20x]\n", 42));
	printf("[%d]\n", printf("(-20x),                               -42 = [%-20x]\n", -42));
	printf("[%d]\n", ft_printf("(-20x),                               -42 = [%-20x]\n", -42));
	printf("[%d]\n", printf("(-#20x),                               42 = [%-#20x]\n", 42));
	printf("[%d]\n", ft_printf("(-#20x),                               42 = [%-#20x]\n", 42));
	printf("[%d]\n", printf("(-#20x),                              -42 = [%-#20x]\n", -42));
	printf("[%d]\n", ft_printf("(-#20x),                              -42 = [%-#20x]\n", -42));
	printf("[%d]\n", printf("(-#.20x),                               0 = [%-#.20x]\n", 0));
	printf("[%d]\n", ft_printf("(-#.20x),                               0 = [%-#.20x]\n", 0));
	printf("[%d]\n", printf("(-.20x),                               42 = [%-.20x]\n", 42));
	printf("[%d]\n", ft_printf("(-.20x),                               42 = [%-.20x]\n", 42));
	printf("[%d]\n", printf("(-.20x),                              -42 = [%-.20x]\n", -42));
	printf("[%d]\n", ft_printf("(-.20x),                              -42 = [%-.20x]\n", -42));
	printf("[%d]\n", printf("(-#.20x),                              42 = [%-#.20x]\n", 42));
	printf("[%d]\n", ft_printf("(-#.20x),                              42 = [%-#.20x]\n", 42));
	printf("[%d]\n", printf("(-#.20x),                             -42 = [%-#.20x]\n", -42));
	printf("[%d]\n", ft_printf("(-#.20x),                             -42 = [%-#.20x]\n", -42));
	printf("[%d]\n", printf("(-#26.20x),                             0 = [%-#26.20x]\n", 0));
	printf("[%d]\n", ft_printf("(-#26.20x),                             0 = [%-#26.20x]\n", 0));
	printf("[%d]\n", printf("(-26.20x),                             42 = [%-26.20x]\n", 42));
	printf("[%d]\n", ft_printf("(-26.20x),                             42 = [%-26.20x]\n", 42));
	printf("[%d]\n", printf("(-26.20x),                            -42 = [%-26.20x]\n", -42));
	printf("[%d]\n", ft_printf("(-26.20x),                            -42 = [%-26.20x]\n", -42));
	printf("[%d]\n", printf("(-#26.20x),                            42 = [%-#26.20x]\n", 42));
	printf("[%d]\n", ft_printf("(-#26.20x),                            42 = [%-#26.20x]\n", 42));
	printf("[%d]\n", printf("(-#26.20x),                           -42 = [%-#26.20x]\n", -42));
	printf("[%d]\n", ft_printf("(-#26.20x),                           -42 = [%-#26.20x]\n", -42));
	printf("[%d]\n", printf("(-#20.26x),                             0 = [%-#20.26x]\n", 0));
	printf("[%d]\n", ft_printf("(-#20.26x),                             0 = [%-#20.26x]\n", 0));
	printf("[%d]\n", printf("(-20.26x),                             42 = [%-20.26x]\n", 42));
	printf("[%d]\n", ft_printf("(-20.26x),                             42 = [%-20.26x]\n", 42));
	printf("[%d]\n", printf("(-20.26x),                            -42 = [%-20.26x]\n", -42));
	printf("[%d]\n", ft_printf("(-20.26x),                            -42 = [%-20.26x]\n", -42));
	printf("[%d]\n", printf("(-#20.26x),                            42 = [%-#20.26x]\n", 42));
	printf("[%d]\n", ft_printf("(-#20.26x),                            42 = [%-#20.26x]\n", 42));
	printf("[%d]\n", printf("(-#20.26x),                           -42 = [%-#20.26x]\n", -42));
	printf("[%d]\n", ft_printf("(-#20.26x),                           -42 = [%-#20.26x]\n", -42));
	printf("\n");
	printf("\n");
	// printf("[%d]\n", printf("(+x),                     42 = [%+x]\n", 42));
	// printf("[%d]\n", printf("( x),                     42 = [% x]\n", 42));
	printf("[%d]\n", printf("(x),                     -1 = [%x]\n", -1));
	printf("[%d]\n", ft_printf("(x),                     -1 = [%x]\n", -1));
	printf("[%d]\n", printf("(x),                      0 = [%x]\n", 0));
	printf("[%d]\n", ft_printf("(x),                      0 = [%x]\n", 0));
	printf("[%d]\n", printf("(x),             4294967296 = [%x]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(x),             4294967296 = [%x]\n", (unsigned int)4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(#x),                                  0 = [%#x]\n", 0));
	printf("[%d]\n", ft_printf("(#x),                                  0 = [%#x]\n", 0));
	printf("[%d]\n", printf("(x),                                  42 = [%x]\n", 42));
	printf("[%d]\n", ft_printf("(x),                                  42 = [%x]\n", 42));
	printf("[%d]\n", printf("(x),                                 -42 = [%x]\n", -42));
	printf("[%d]\n", ft_printf("(x),                                 -42 = [%x]\n", -42));
	printf("[%d]\n", printf("(#x),                                 42 = [%#x]\n", 42));
	printf("[%d]\n", ft_printf("(#x),                                 42 = [%#x]\n", 42));
	printf("[%d]\n", printf("(#x),                                -42 = [%#x]\n", -42));
	printf("[%d]\n", ft_printf("(#x),                                -42 = [%#x]\n", -42));
	printf("[%d]\n", printf("(#1x),                                 0 = [%#1x]\n", 0));
	printf("[%d]\n", ft_printf("(#1x),                                 0 = [%#1x]\n", 0));
	printf("[%d]\n", printf("(1x),                                 42 = [%1x]\n", 42));
	printf("[%d]\n", ft_printf("(1x),                                 42 = [%1x]\n", 42));
	printf("[%d]\n", printf("(1x),                                -42 = [%1x]\n", -42));
	printf("[%d]\n", ft_printf("(1x),                                -42 = [%1x]\n", -42));
	printf("[%d]\n", printf("(#1x),                                42 = [%#1x]\n", 42));
	printf("[%d]\n", ft_printf("(#1x),                                42 = [%#1x]\n", 42));
	printf("[%d]\n", printf("(#1x),                               -42 = [%#1x]\n", -42));
	printf("[%d]\n", ft_printf("(#1x),                               -42 = [%#1x]\n", -42));
	printf("[%d]\n", printf("(#20x),                                0 = [%#20x]\n", 0));
	printf("[%d]\n", ft_printf("(#20x),                                0 = [%#20x]\n", 0));
	printf("[%d]\n", printf("(20x),                                42 = [%20x]\n", 42));
	printf("[%d]\n", ft_printf("(20x),                                42 = [%20x]\n", 42));
	printf("[%d]\n", printf("(20x),                               -42 = [%20x]\n", -42));
	printf("[%d]\n", ft_printf("(20x),                               -42 = [%20x]\n", -42));
	printf("[%d]\n", printf("(#20x),                               42 = [%#20x]\n", 42));
	printf("[%d]\n", ft_printf("(#20x),                               42 = [%#20x]\n", 42));
	printf("[%d]\n", printf("(#20x),                              -42 = [%#20x]\n", -42));
	printf("[%d]\n", ft_printf("(#20x),                              -42 = [%#20x]\n", -42));
	printf("[%d]\n", printf("(0#20x),                               0 = [%0#20x]\n", 0));
	printf("[%d]\n", ft_printf("(0#20x),                               0 = [%0#20x]\n", 0));
	printf("[%d]\n", printf("(020x),                               42 = [%020x]\n", 42));
	printf("[%d]\n", ft_printf("(020x),                               42 = [%020x]\n", 42));
	printf("[%d]\n", printf("(020x),                              -42 = [%020x]\n", -42));
	printf("[%d]\n", ft_printf("(020x),                              -42 = [%020x]\n", -42));
	printf("[%d]\n", printf("(0#20x),                              42 = [%0#20x]\n", 42));
	printf("[%d]\n", ft_printf("(0#20x),                              42 = [%0#20x]\n", 42));
	printf("[%d]\n", printf("(0#20x),                             -42 = [%0#20x]\n", -42));
	printf("[%d]\n", ft_printf("(0#20x),                             -42 = [%0#20x]\n", -42));
	printf("[%d]\n", printf("(#.20x),                               0 = [%#.20x]\n", 0));
	printf("[%d]\n", ft_printf("(#.20x),                               0 = [%#.20x]\n", 0));
	printf("[%d]\n", printf("(.20x),                               42 = [%.20x]\n", 42));
	printf("[%d]\n", ft_printf("(.20x),                               42 = [%.20x]\n", 42));
	printf("[%d]\n", printf("(.20x),                              -42 = [%.20x]\n", -42));
	printf("[%d]\n", ft_printf("(.20x),                              -42 = [%.20x]\n", -42));
	printf("[%d]\n", printf("(#.20x),                              42 = [%#.20x]\n", 42));
	printf("[%d]\n", ft_printf("(#.20x),                              42 = [%#.20x]\n", 42));
	printf("[%d]\n", printf("(#.20x),                             -42 = [%#.20x]\n", -42));
	printf("[%d]\n", ft_printf("(#.20x),                             -42 = [%#.20x]\n", -42));
	printf("[%d]\n", printf("(#26.20x),                             0 = [%#26.20x]\n", 0));
	printf("[%d]\n", ft_printf("(#26.20x),                             0 = [%#26.20x]\n", 0));
	printf("[%d]\n", printf("(26.20x),                             42 = [%26.20x]\n", 42));
	printf("[%d]\n", ft_printf("(26.20x),                             42 = [%26.20x]\n", 42));
	printf("[%d]\n", printf("(26.20x),                            -42 = [%26.20x]\n", -42));
	printf("[%d]\n", ft_printf("(26.20x),                            -42 = [%26.20x]\n", -42));
	printf("[%d]\n", printf("(#26.20x),                            42 = [%#26.20x]\n", 42));
	printf("[%d]\n", ft_printf("(#26.20x),                            42 = [%#26.20x]\n", 42));
	printf("[%d]\n", printf("(#26.20x),                           -42 = [%#26.20x]\n", -42));
	printf("[%d]\n", ft_printf("(#26.20x),                           -42 = [%#26.20x]\n", -42));
	printf("[%d]\n", printf("(#026.20x),                            0 = [%#026.20x]\n", 0));
	printf("[%d]\n", ft_printf("(#026.20x),                            0 = [%#026.20x]\n", 0));
	printf("[%d]\n", printf("(026.20x),                            42 = [%026.20x]\n", 42));
	printf("[%d]\n", ft_printf("(026.20x),                            42 = [%026.20x]\n", 42));
	printf("[%d]\n", printf("(026.20x),                           -42 = [%026.20x]\n", -42));
	printf("[%d]\n", ft_printf("(026.20x),                           -42 = [%026.20x]\n", -42));
	printf("[%d]\n", printf("(#026.20x),                           42 = [%#026.20x]\n", 42));
	printf("[%d]\n", ft_printf("(#026.20x),                           42 = [%#026.20x]\n", 42));
	printf("[%d]\n", printf("(#026.20x),                          -42 = [%#026.20x]\n", -42));
	printf("[%d]\n", ft_printf("(#026.20x),                          -42 = [%#026.20x]\n", -42));
	printf("[%d]\n", printf("(#20.26x),                             0 = [%#20.26x]\n", 0));
	printf("[%d]\n", ft_printf("(#20.26x),                             0 = [%#20.26x]\n", 0));
	printf("[%d]\n", printf("(20.26x),                             42 = [%20.26x]\n", 42));
	printf("[%d]\n", ft_printf("(20.26x),                             42 = [%20.26x]\n", 42));
	printf("[%d]\n", printf("(20.26x),                            -42 = [%20.26x]\n", -42));
	printf("[%d]\n", ft_printf("(20.26x),                            -42 = [%20.26x]\n", -42));
	printf("[%d]\n", printf("(#20.26x),                            42 = [%#20.26x]\n", 42));
	printf("[%d]\n", ft_printf("(#20.26x),                            42 = [%#20.26x]\n", 42));
	printf("[%d]\n", printf("(#20.26x),                           -42 = [%#20.26x]\n", -42));
	printf("[%d]\n", ft_printf("(#20.26x),                           -42 = [%#20.26x]\n", -42));

	// [X] - Conversion
	printf("\n\n[X] - Conversion\n");
	// printf("[%d]\n", printf("(-+X),                     42 = [%-+X]\n", 42));
	// printf("[%d]\n", printf("(- X),                     42 = [%- X]\n", 42));
	printf("[%d]\n", printf("(-X),                     -1 = [%-X]\n", -1));
	printf("[%d]\n", ft_printf("(-X),                     -1 = [%-X]\n", -1));
	printf("[%d]\n", printf("(-X),                      0 = [%-X]\n", 0));
	printf("[%d]\n", ft_printf("(-X),                      0 = [%-X]\n", 0));
	printf("[%d]\n", printf("(-X),             4294967296 = [%-X]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(-X),             4294967296 = [%-X]\n", (unsigned int)4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(-#X),                                  0 = [%-#X]\n", 0));
	printf("[%d]\n", ft_printf("(-#X),                                  0 = [%-#X]\n", 0));
	printf("[%d]\n", printf("(-X),                                  42 = [%-X]\n", 42));
	printf("[%d]\n", ft_printf("(-X),                                  42 = [%-X]\n", 42));
	printf("[%d]\n", printf("(-X),                                 -42 = [%-X]\n", -42));
	printf("[%d]\n", ft_printf("(-X),                                 -42 = [%-X]\n", -42));
	printf("[%d]\n", printf("(-#X),                                 42 = [%-#X]\n", 42));
	printf("[%d]\n", ft_printf("(-#X),                                 42 = [%-#X]\n", 42));
	printf("[%d]\n", printf("(-#X),                                -42 = [%-#X]\n", -42));
	printf("[%d]\n", ft_printf("(-#X),                                -42 = [%-#X]\n", -42));
	printf("[%d]\n", printf("(-#1X),                                 0 = [%-#1X]\n", 0));
	printf("[%d]\n", ft_printf("(-#1X),                                 0 = [%-#1X]\n", 0));
	printf("[%d]\n", printf("(-1X),                                 42 = [%-1X]\n", 42));
	printf("[%d]\n", ft_printf("(-1X),                                 42 = [%-1X]\n", 42));
	printf("[%d]\n", printf("(-1X),                                -42 = [%-1X]\n", -42));
	printf("[%d]\n", ft_printf("(-1X),                                -42 = [%-1X]\n", -42));
	printf("[%d]\n", printf("(-#1X),                                42 = [%-#1X]\n", 42));
	printf("[%d]\n", ft_printf("(-#1X),                                42 = [%-#1X]\n", 42));
	printf("[%d]\n", printf("(-#1X),                               -42 = [%-#1X]\n", -42));
	printf("[%d]\n", ft_printf("(-#1X),                               -42 = [%-#1X]\n", -42));
	printf("[%d]\n", printf("(-#20X),                                0 = [%-#20X]\n", 0));
	printf("[%d]\n", ft_printf("(-#20X),                                0 = [%-#20X]\n", 0));
	printf("[%d]\n", printf("(-20X),                                42 = [%-20X]\n", 42));
	printf("[%d]\n", ft_printf("(-20X),                                42 = [%-20X]\n", 42));
	printf("[%d]\n", printf("(-20X),                               -42 = [%-20X]\n", -42));
	printf("[%d]\n", ft_printf("(-20X),                               -42 = [%-20X]\n", -42));
	printf("[%d]\n", printf("(-#20X),                               42 = [%-#20X]\n", 42));
	printf("[%d]\n", ft_printf("(-#20X),                               42 = [%-#20X]\n", 42));
	printf("[%d]\n", printf("(-#20X),                              -42 = [%-#20X]\n", -42));
	printf("[%d]\n", ft_printf("(-#20X),                              -42 = [%-#20X]\n", -42));
	printf("[%d]\n", printf("(-#.20X),                               0 = [%-#.20X]\n", 0));
	printf("[%d]\n", ft_printf("(-#.20X),                               0 = [%-#.20X]\n", 0));
	printf("[%d]\n", printf("(-.20X),                               42 = [%-.20X]\n", 42));
	printf("[%d]\n", ft_printf("(-.20X),                               42 = [%-.20X]\n", 42));
	printf("[%d]\n", printf("(-.20X),                              -42 = [%-.20X]\n", -42));
	printf("[%d]\n", ft_printf("(-.20X),                              -42 = [%-.20X]\n", -42));
	printf("[%d]\n", printf("(-#.20X),                              42 = [%-#.20X]\n", 42));
	printf("[%d]\n", ft_printf("(-#.20X),                              42 = [%-#.20X]\n", 42));
	printf("[%d]\n", printf("(-#.20X),                             -42 = [%-#.20X]\n", -42));
	printf("[%d]\n", ft_printf("(-#.20X),                             -42 = [%-#.20X]\n", -42));
	printf("[%d]\n", printf("(-#26.20X),                             0 = [%-#26.20X]\n", 0));
	printf("[%d]\n", ft_printf("(-#26.20X),                             0 = [%-#26.20X]\n", 0));
	printf("[%d]\n", printf("(-26.20X),                             42 = [%-26.20X]\n", 42));
	printf("[%d]\n", ft_printf("(-26.20X),                             42 = [%-26.20X]\n", 42));
	printf("[%d]\n", printf("(-26.20X),                            -42 = [%-26.20X]\n", -42));
	printf("[%d]\n", ft_printf("(-26.20X),                            -42 = [%-26.20X]\n", -42));
	printf("[%d]\n", printf("(-#26.20X),                            42 = [%-#26.20X]\n", 42));
	printf("[%d]\n", ft_printf("(-#26.20X),                            42 = [%-#26.20X]\n", 42));
	printf("[%d]\n", printf("(-#26.20X),                           -42 = [%-#26.20X]\n", -42));
	printf("[%d]\n", ft_printf("(-#26.20X),                           -42 = [%-#26.20X]\n", -42));
	printf("[%d]\n", printf("(-#20.26X),                             0 = [%-#20.26X]\n", 0));
	printf("[%d]\n", ft_printf("(-#20.26X),                             0 = [%-#20.26X]\n", 0));
	printf("[%d]\n", printf("(-20.26X),                             42 = [%-20.26X]\n", 42));
	printf("[%d]\n", ft_printf("(-20.26X),                             42 = [%-20.26X]\n", 42));
	printf("[%d]\n", printf("(-20.26X),                            -42 = [%-20.26X]\n", -42));
	printf("[%d]\n", ft_printf("(-20.26X),                            -42 = [%-20.26X]\n", -42));
	printf("[%d]\n", printf("(-#20.26X),                            42 = [%-#20.26X]\n", 42));
	printf("[%d]\n", ft_printf("(-#20.26X),                            42 = [%-#20.26X]\n", 42));
	printf("[%d]\n", printf("(-#20.26X),                           -42 = [%-#20.26X]\n", -42));
	printf("[%d]\n", ft_printf("(-#20.26X),                           -42 = [%-#20.26X]\n", -42));
	printf("\n");
	printf("\n");
	// printf("[%d]\n", printf("(+X),                     42 = [%+X]\n", 42));
	// printf("[%d]\n", printf("( X),                     42 = [% X]\n", 42));
	printf("[%d]\n", printf("(X),                     -1 = [%X]\n", -1));
	printf("[%d]\n", ft_printf("(X),                     -1 = [%X]\n", -1));
	printf("[%d]\n", printf("(X),                      0 = [%X]\n", 0));
	printf("[%d]\n", ft_printf("(X),                      0 = [%X]\n", 0));
	printf("[%d]\n", printf("(X),             4294967296 = [%X]\n", (unsigned int)4294967296));
	printf("[%d]\n", ft_printf("(X),             4294967296 = [%X]\n", (unsigned int)4294967296));
	printf("\n");
	printf("\n");
	printf("[%d]\n", printf("(#X),                                  0 = [%#X]\n", 0));
	printf("[%d]\n", ft_printf("(#X),                                  0 = [%#X]\n", 0));
	printf("[%d]\n", printf("(X),                                  42 = [%X]\n", 42));
	printf("[%d]\n", ft_printf("(X),                                  42 = [%X]\n", 42));
	printf("[%d]\n", printf("(X),                                 -42 = [%X]\n", -42));
	printf("[%d]\n", ft_printf("(X),                                 -42 = [%X]\n", -42));
	printf("[%d]\n", printf("(#X),                                 42 = [%#X]\n", 42));
	printf("[%d]\n", ft_printf("(#X),                                 42 = [%#X]\n", 42));
	printf("[%d]\n", printf("(#X),                                -42 = [%#X]\n", -42));
	printf("[%d]\n", ft_printf("(#X),                                -42 = [%#X]\n", -42));
	printf("[%d]\n", printf("(#1X),                                 0 = [%#1X]\n", 0));
	printf("[%d]\n", ft_printf("(#1X),                                 0 = [%#1X]\n", 0));
	printf("[%d]\n", printf("(1X),                                 42 = [%1X]\n", 42));
	printf("[%d]\n", ft_printf("(1X),                                 42 = [%1X]\n", 42));
	printf("[%d]\n", printf("(1X),                                -42 = [%1X]\n", -42));
	printf("[%d]\n", ft_printf("(1X),                                -42 = [%1X]\n", -42));
	printf("[%d]\n", printf("(#1X),                                42 = [%#1X]\n", 42));
	printf("[%d]\n", ft_printf("(#1X),                                42 = [%#1X]\n", 42));
	printf("[%d]\n", printf("(#1X),                               -42 = [%#1X]\n", -42));
	printf("[%d]\n", ft_printf("(#1X),                               -42 = [%#1X]\n", -42));
	printf("[%d]\n", printf("(#20X),                                0 = [%#20X]\n", 0));
	printf("[%d]\n", ft_printf("(#20X),                                0 = [%#20X]\n", 0));
	printf("[%d]\n", printf("(20X),                                42 = [%20X]\n", 42));
	printf("[%d]\n", ft_printf("(20X),                                42 = [%20X]\n", 42));
	printf("[%d]\n", printf("(20X),                               -42 = [%20X]\n", -42));
	printf("[%d]\n", ft_printf("(20X),                               -42 = [%20X]\n", -42));
	printf("[%d]\n", printf("(#20X),                               42 = [%#20X]\n", 42));
	printf("[%d]\n", ft_printf("(#20X),                               42 = [%#20X]\n", 42));
	printf("[%d]\n", printf("(#20X),                              -42 = [%#20X]\n", -42));
	printf("[%d]\n", ft_printf("(#20X),                              -42 = [%#20X]\n", -42));
	printf("[%d]\n", printf("(0#20X),                               0 = [%0#20X]\n", 0));
	printf("[%d]\n", ft_printf("(0#20X),                               0 = [%0#20X]\n", 0));
	printf("[%d]\n", printf("(020X),                               42 = [%020X]\n", 42));
	printf("[%d]\n", ft_printf("(020X),                               42 = [%020X]\n", 42));
	printf("[%d]\n", printf("(020X),                              -42 = [%020X]\n", -42));
	printf("[%d]\n", ft_printf("(020X),                              -42 = [%020X]\n", -42));
	printf("[%d]\n", printf("(0#20X),                              42 = [%0#20X]\n", 42));
	printf("[%d]\n", ft_printf("(0#20X),                              42 = [%0#20X]\n", 42));
	printf("[%d]\n", printf("(0#20X),                             -42 = [%0#20X]\n", -42));
	printf("[%d]\n", ft_printf("(0#20X),                             -42 = [%0#20X]\n", -42));
	printf("[%d]\n", printf("(#.20X),                               0 = [%#.20X]\n", 0));
	printf("[%d]\n", ft_printf("(#.20X),                               0 = [%#.20X]\n", 0));
	printf("[%d]\n", printf("(.20X),                               42 = [%.20X]\n", 42));
	printf("[%d]\n", ft_printf("(.20X),                               42 = [%.20X]\n", 42));
	printf("[%d]\n", printf("(.20X),                              -42 = [%.20X]\n", -42));
	printf("[%d]\n", ft_printf("(.20X),                              -42 = [%.20X]\n", -42));
	printf("[%d]\n", printf("(#.20X),                              42 = [%#.20X]\n", 42));
	printf("[%d]\n", ft_printf("(#.20X),                              42 = [%#.20X]\n", 42));
	printf("[%d]\n", printf("(#.20X),                             -42 = [%#.20X]\n", -42));
	printf("[%d]\n", ft_printf("(#.20X),                             -42 = [%#.20X]\n", -42));
	printf("[%d]\n", printf("(#26.20X),                             0 = [%#26.20X]\n", 0));
	printf("[%d]\n", ft_printf("(#26.20X),                             0 = [%#26.20X]\n", 0));
	printf("[%d]\n", printf("(26.20X),                             42 = [%26.20X]\n", 42));
	printf("[%d]\n", ft_printf("(26.20X),                             42 = [%26.20X]\n", 42));
	printf("[%d]\n", printf("(26.20X),                            -42 = [%26.20X]\n", -42));
	printf("[%d]\n", ft_printf("(26.20X),                            -42 = [%26.20X]\n", -42));
	printf("[%d]\n", printf("(#26.20X),                            42 = [%#26.20X]\n", 42));
	printf("[%d]\n", ft_printf("(#26.20X),                            42 = [%#26.20X]\n", 42));
	printf("[%d]\n", printf("(#26.20X),                           -42 = [%#26.20X]\n", -42));
	printf("[%d]\n", ft_printf("(#26.20X),                           -42 = [%#26.20X]\n", -42));
	printf("[%d]\n", printf("(#026.20X),                            0 = [%#026.20X]\n", 0));
	printf("[%d]\n", ft_printf("(#026.20X),                            0 = [%#026.20X]\n", 0));
	printf("[%d]\n", printf("(026.20X),                            42 = [%026.20X]\n", 42));
	printf("[%d]\n", ft_printf("(026.20X),                            42 = [%026.20X]\n", 42));
	printf("[%d]\n", printf("(026.20X),                           -42 = [%026.20X]\n", -42));
	printf("[%d]\n", ft_printf("(026.20X),                           -42 = [%026.20X]\n", -42));
	printf("[%d]\n", printf("(#026.20X),                           42 = [%#026.20X]\n", 42));
	printf("[%d]\n", ft_printf("(#026.20X),                           42 = [%#026.20X]\n", 42));
	printf("[%d]\n", printf("(#026.20X),                          -42 = [%#026.20X]\n", -42));
	printf("[%d]\n", ft_printf("(#026.20X),                          -42 = [%#026.20X]\n", -42));
	printf("[%d]\n", printf("(#20.26X),                             0 = [%#20.26X]\n", 0));
	printf("[%d]\n", ft_printf("(#20.26X),                             0 = [%#20.26X]\n", 0));
	printf("[%d]\n", printf("(20.26X),                             42 = [%20.26X]\n", 42));
	printf("[%d]\n", ft_printf("(20.26X),                             42 = [%20.26X]\n", 42));
	printf("[%d]\n", printf("(20.26X),                            -42 = [%20.26X]\n", -42));
	printf("[%d]\n", ft_printf("(20.26X),                            -42 = [%20.26X]\n", -42));
	printf("[%d]\n", printf("(#20.26X),                            42 = [%#20.26X]\n", 42));
	printf("[%d]\n", ft_printf("(#20.26X),                            42 = [%#20.26X]\n", 42));
	printf("[%d]\n", printf("(#20.26X),                           -42 = [%#20.26X]\n", -42));
	printf("[%d]\n", ft_printf("(#20.26X),                           -42 = [%#20.26X]\n", -42));
	return (0);
}
