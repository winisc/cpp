/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/20 16:12:58 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie_heap = newZombie("HeapZombie");
    zombie_heap->announce();

    randomChump("StackZombie");

    delete zombie_heap;
    return (0);
}
