/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:14:50 by wini              #+#    #+#             */
/*   Updated: 2026/11/12 10:14:50 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- construcao: ClapTrap primeiro, depois ScavTrap ---" << std::endl;
	ScavTrap	s("Serena");

	std::cout << "\n--- acoes ---" << std::endl;
	s.attack("um intruso");
	s.takeDamage(30);
	s.beRepaired(10);
	s.guardGate();

	std::cout << "\n--- ClapTrap normal para comparar ---" << std::endl;
	ClapTrap	c("Clappy");
	c.attack("um intruso");

	std::cout << "\n--- polimorfismo: ponteiro de ClapTrap para ScavTrap ---" << std::endl;
	ClapTrap	*p = new ScavTrap("Ptr");
	p->attack("alguem");
	delete p;

	std::cout << "\n--- copia ---" << std::endl;
	ScavTrap	copy(s);
	copy.guardGate();

	std::cout << "\n--- destruicao (ordem inversa) ---" << std::endl;
	return (0);
}
