/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemaroul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:33:49 by gemaroul          #+#    #+#             */
/*   Updated: 2020/11/12 17:33:52 by gemaroul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/shared.h"

size_t	ft_pow2(size_t n, size_t pow)
{
	return (pow ? n * ft_pow(n, pow - 1) : 1);
}
