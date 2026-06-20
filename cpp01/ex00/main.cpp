/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/20 01:42:11 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main( void )
{
    Zombie* heap = newZombie("HeapZombie");
    heap->announce();

    randomChump("StackZombie");

    delete heap;
    return (0);
}
