/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:05 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 17:38:25 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}

/*
** DEFINIÇÃO: 
** Converte strings em números inteiros
**
** NOTAS: 
** Recebe como parâmetro um ponteiro para um vetor de char e devolve como retorno um número inteiro.
** 
** IMPLEMENTAÇÃO:
** 1 - Cria três variáveis:
** Uma manterá o resultado a ser retornado. Uma transforma um número negativo e uma unsigned int para ser um contador;
** 2 - Inicializa as variáveis;
** 3 - Enquanto o valor contido na posição da string for espaçamento ou caracteres de escape, incrementa a próxima posição;
** 4 - Se a flag "+" segue, se "-" acrescenta o sinal na frente do digito e siga para a próxima posição;
** 5 - Se o caractere for um número, converta o valor para um numérico ASCII; 
** 6 - Defina como primeiro caractere 0 (zero);
** 7 - Adiciona uma casa decimal multiplicando por 10;
** essa parte é importante pois sem o (* 10) os próximos números apenas sobrescrevem a posição atual;
** 8 - Insira o caractere 0 (zero) na posição atual da string;
** 9 - Incrementa para a próxima posição;
** 10 - Retorne como resultado o valor convertido para inteiro.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftatoi
*/
