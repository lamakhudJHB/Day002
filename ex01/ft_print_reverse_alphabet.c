/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:23:27 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/10 11:27:23 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char h);
void ft_print_reverse_alphabet(void)
	char h = 'z';
	while(h>='a'){
		ft_putchar(h);
			h++;
	}
