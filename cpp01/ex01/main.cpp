/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/20 16:27:08 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int N = 4;
    Zombie* zombie_head = zombieHorde(N, "Benini");

    int i = 0;
    while (i < 4)
        zombie_head[i++].announce();
    delete[] zombie_head;
    return (0);
}
